#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//*****************
//�ṹ�崫��
//****************

//struct S
//{
//	int date[100];
//	int num;
//};
////�������ε�ʱ�򣬲�����Ҫѹջ������ʱ��Ϳռ��ϵ����ġ�
////�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��
//// ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���
//void print1(struct S tmp)
//{
//	printf("%d\n", tmp.num);
//}
////���ۣ�
////�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print1(s);
//	print2(&s);
//
//	return 0;
//}



//*****************
//λ��
// λ���漰�ܶ಻ȷ�����أ�λ���ǲ���ƽ̨��ע�ؿ���ֲ�ĳ���Ӧ�ñ���ʹ��λ��
//**************
//
//struct A
//{
//	int _a : 2;//������λ 
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	
//	printf("%d\n", sizeof(struct A));//8
//
//	return 0;
//}



//�ռ�����ο��ٵ�
//һ������

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}





//struct S
//{
//	char a : 2;
//	char b : 5;
//	int c : 10;
//	//char d : ;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 2;
//	s.b = 12;
//	s.c = 3;
//	//s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}




//ö��
//*****************

//enum Color
//{
//	RED,
//    GREEN,
//	BLUE
//};
//int main()
//{
//	enum Color c=GREEN;
//
//	printf("%d\n", RED);//0
//	printf("%d\n", GREEN);//1
//	printf("%d\n", BLUE);//2
//
//	enum Color cc = 3;
//
//	return 0;
//}




//����
//�ص㣺 ���ϵĳ�Ա�ǹ���ͬһ���ڴ�ռ�ģ�����һ�����ϱ����Ĵ�С������������Ա�Ĵ�С����Ϊ��
//�����ٵ����������������Ǹ���Ա����
//*****************

//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	union Un un={0};
//
//	printf("%d\n", &un);
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//
//}





////�жϵ�ǰ������Ĵ�С�˴洢
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//
//	}un={.i=1};
//	return un.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}




//������Ĵ�С
//���ϵĴ�С����������Ա�Ĵ�С��
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
//***********************************

//union Un1
//{
//	char c[5];//5  1  8  1(����������Ա�Ĵ�С5��������4�ı���)
//	int i;//4  8  4
//};
//
//union Un2
//{
//	short c[7];//14 2 8 2(����������Ա�Ĵ�С14,������4�ı���)
//	int i;//4 8 4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//5+3(�˷ѵ�)=8
//	printf("%d\n", sizeof(union Un2));//14+2(�˷ѵ�)=16
//	return 0;
//}





















