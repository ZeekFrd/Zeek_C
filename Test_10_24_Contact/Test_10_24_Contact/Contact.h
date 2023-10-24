#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//ö�� �������֣�����ֱ��
enum OPTION
{
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,//3
	MODIFY,//4
	SHOW,//5
	SORT//6
};

//���͵�����

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;



//ͨѶ¼

typedef struct Contact
{
	PeoInfo data[100];
	int sz;
}Contact;


//��������
// 
//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ʾ������ϵ�˵���Ϣ
void ShowContact(const Contact* pc);//ֻ��ӡ�����漰�޸���Ϣ�����Լ�const

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);


//����ָ����ϵ��
void SearchContact(Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);
