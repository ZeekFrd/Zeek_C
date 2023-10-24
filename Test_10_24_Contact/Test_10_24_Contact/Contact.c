
#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void InitContact(Contact* pc)
{
	assert(pc);//检测指针是否为空指针，增强代码的健壮性
	memset(pc->data, 0, sizeof(pc->data));
	pc->sz = 0;
}


void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("成功增加联系人\n");
}

void ShowContact(const Contact* pc)
{
	int i = 0;
	//打印列标题
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
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




//删除联系人功能实现

//常规写法*********

//void DelContact(Contact* pc)
//{
//	if (pc->sz == 0)
//	{
//		printf("通讯录为空，无法删除\n");
//		return;
//	}
//	char name[MAX_NAME] = { 0 };
//	assert(pc);
//	//删除
//	printf("请输入要删除的人的名字:>");
//	scanf("%s", name);
//
//	//找到要删除的人//遍历
//	int i = 0;
//	int del = 0;
//	int flag = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(pc->data[i].name, name)==0)//strcmp()用于比较两个字符串是否相等，相等返回0
//		{
//			del = i;
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("要删除的联系人不存在\n");
//		return;
//	}
//
//
//	//删除坐标为del的联系人
//	for (i = del; i < pc->sz-1; i++)
//	{
//		pc->data[i] = pc->data[i + 1];
//	}
//	pc->sz--;
//	printf("成功删除联系人\n");
//}

//****************





//*******************
//封装查询函数
int FindByName(const Contact* pc, char name[])
{
	//找到要删除的人//遍历
	int i = 0;

	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)//strcmp()用于比较两个字符串是否相等，相等返回0
		{
			return i;//找到了
		}
	}
	return -2;//找不到
}
//*****************************


//删除过程中有查询步骤，查询可以单独封装为函数，其他功能也可以使用这个函数

void DelContact(Contact* pc)
{
	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	assert(pc);
	//删除
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);

	//找到要删除的人//遍历
	int del = FindByName(pc, name);
	if (del == 0)
	{
		printf("要删除的联系人不存在\n");
		return;
	}
	int i = 0;
	//删除坐标为del的联系人
	for (i = del; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("成功删除联系人\n");
}


//添加查询指定联系人的功能
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -2)
		printf("要查找的人不存在\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");

		//打印数据
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}


//修改指定联系人
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("要修改的人不存在\n");
	else
	{
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
		printf("修改成功\n");
	}

}
