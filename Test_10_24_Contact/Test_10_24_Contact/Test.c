#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//��ӡ�˵�
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
	//���ȵ���ͨѶ¼
	//PeoInfo data[100];
	//int sz = 0;
	Contact con;
	InitContact(&con);//�ṹ�崫�Σ���ô���ַ

	do
	{
		menu();
		printf("��ѡ��:>");
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
			//����
			//����������
			//����������
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;

		}

	} while (input);
}
int main()
{
	test();
	return 0;
}
