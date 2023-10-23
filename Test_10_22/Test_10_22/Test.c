#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//struct SN
//{
//	char c;
//	int i;
//	//.i  .c  不需要考虑顺序
//}sn1 = { 'q',100 }, sn2 = { .i = 200,.c = 'w' };//全局变量
//
//int main()
//{
//	//struct SN sn3, sn4;//局部变量
//	printf("%c %d\n", sn2.c, sn2.i);
//	return 0;
//}






//struct SN
//{
//	char c;
//	int i;
//	//.i  .c  不需要考虑顺序
//}sn1 = { 'q',100 }, sn2 = { .i = 200,.c = 'w' };//全局变量
//
//struct S
//{
//	double d;
//	//结构体里包含结构体的初始化
//	struct SN sn;
//	int arr[10];
//};
//
//int main()
//{
//	//struct SN sn3, sn4;//局部变量
//	//printf("%c %d\n", sn2.c, sn2.i);
//	struct S s = { 3.14,{'a',99},{1,2,3} };
//	printf("%lf %c %d\n", s.d, s.sn.c, s.sn.i);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	return 0;
//}






//**************************
//结构体内存对齐
//**********************

#include<stddef.h>
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//struct S2
//{
//	int i;//4
//	char c1;//1
//	char c2;//1
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S1));//?
//	//printf("%d\n", sizeof(struct S2));//?
//	printf("%d\n", offsetof(struct S1, c1));//可以计算结构体成员相较于结构体起始位置的偏移量
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));
//	return 0;
//}


//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S3));
//	return 0;
//}





//嵌套结构体的大小
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;//嵌套结构体
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}





//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S2
//{
//	int i;
//	char c1;
//	char c2;
//};
//
//struct S3
//{
//	double d;
//	//char c;
//	//int i;
//};

//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	
//	// offsetof宏 添加头文件<stddof>可以计算结构体成员相较于结构体起始位置的偏移量
//	printf("%d\n",offsetof(struct S1,c1));
//	printf("%d\n",offsetof(struct S1,i));
//	printf("%d\n",offsetof(struct S1,c2));
//	return 0;
//}




//让占用空间小的物体尽量集中在一起
//例如

//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//}




//////修改默认对齐数
//#pragma pack(8)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//#pragma pack(2)//设置默认对齐数为2
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//取消设置的默认对齐数，还原为默认
//int main()
//{
//	//输出的结果
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}