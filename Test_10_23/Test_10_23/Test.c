#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//*****************
//结构体传参
//****************

//struct S
//{
//	int date[100];
//	int num;
//};
////函数传参的时候，参数需要压栈，会有时间和空间上的消耗。
////如果传递一个结构体对象的时候，结构体过大，参数压栈的
//// 系统开销比较大，所以会导致性能的下降。
//void print1(struct S tmp)
//{
//	printf("%d\n", tmp.num);
//}
////结论：
////结构体传参的时候，要传结构体的地址
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
//位段
// 位段涉及很多不确定因素，位段是不跨平台，注重可移植的程序应该避免使用位段
//**************
//
//struct A
//{
//	int _a : 2;//二进制位 
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



//空间是如何开辟的
//一个例子

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




//枚举
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




//联合
//特点： 联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小（因为联
//合至少得有能力保存最大的那个成员）。
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





////判断当前计算机的大小端存储
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}




//联合体的大小
//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
//***********************************

//union Un1
//{
//	char c[5];//5  1  8  1(至少是最大成员的大小5，并且是4的倍数)
//	int i;//4  8  4
//};
//
//union Un2
//{
//	short c[7];//14 2 8 2(至少是最大成员的大小14,并且是4的倍数)
//	int i;//4 8 4
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un1));//5+3(浪费的)=8
//	printf("%d\n", sizeof(union Un2));//14+2(浪费的)=16
//	return 0;
//}





















