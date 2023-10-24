#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//打印菜单
void menu()
{
	printf("*******************************\n");
	printf("***** 1.add     2.del    ******\n");
	printf("***** 3.search  4.modify ******\n");
	printf("***** 5.show    6.sort   ******\n");
	printf("***** 0.exit             ******\n");
	printf("*******************************\n");
}
void test()
{
	int input = 0;
	//首先得有通讯录
	//PeoInfo data[100];
	//int sz = 0;
	Contact con;
	InitContact(&con);//结构体传参，最好传地址

	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			//排序
			//按名字排序？
			//按年龄排序？
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;

		}

	} while (input);
}
int main()
{
	test();
	return 0;
}
