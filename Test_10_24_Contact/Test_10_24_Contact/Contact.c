
#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact* pc)
{
	assert(pc);//���ָ���Ƿ�Ϊ��ָ�룬��ǿ����Ľ�׳��
	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;
}


void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("�ɹ�������ϵ��\n");
}

void ShowContact(const Contact* pc)
{
	int i = 0;
	//��ӡ�б���
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}




//ɾ����ϵ�˹���ʵ��

//����д��*********

//void DelContact(Contact* pc)
//{
//	if (pc->sz == 0)
//	{
//		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
//		return;
//	}
//	char name[MAX_NAME] = { 0 };
//	assert(pc);
//	//ɾ��
//	printf("������Ҫɾ�����˵�����:>");
//	scanf("%s", name);
//
//	//�ҵ�Ҫɾ������//����
//	int i = 0;
//	int del = 0;
//	int flag = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(pc->data[i].name, name)==0)//strcmp()���ڱȽ������ַ����Ƿ���ȣ���ȷ���0
//		{
//			del = i;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("Ҫɾ������ϵ�˲�����\n");
//		return;
//	}
//
//
//	//ɾ������Ϊdel����ϵ��
//	for (i = del; i < pc->sz-1; i++)
//	{
//		pc->data[i] = pc->data[i + 1];
//	}
//	pc->sz--;
//	printf("�ɹ�ɾ����ϵ��\n");
//}

//****************





//*******************
//��װ��ѯ����
int FindByName(const Contact* pc, char name[])
{
	//�ҵ�Ҫɾ������//����
	int i = 0;

	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)//strcmp()���ڱȽ������ַ����Ƿ���ȣ���ȷ���0
		{
			return i;//�ҵ���
		}
	}
	return -2;//�Ҳ���
}
//*****************************


//ɾ���������в�ѯ���裬��ѯ���Ե�����װΪ��������������Ҳ����ʹ���������

void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	assert(pc);
	//ɾ��
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);

	//�ҵ�Ҫɾ������//����
	int del = FindByName(pc, name);
	if (del == 0)
	{
		printf("Ҫɾ������ϵ�˲�����\n");
		return;
	}
	int i = 0;
	//ɾ������Ϊdel����ϵ��
	for (i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("�ɹ�ɾ����ϵ��\n");
}


//��Ӳ�ѯָ����ϵ�˵Ĺ���
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ������ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -2)
		printf("Ҫ���ҵ��˲�����\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");

		//��ӡ����
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}


//�޸�ָ����ϵ��
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("Ҫ�޸ĵ��˲�����\n");
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}

}
