#define _CRT_SECURE_NO_WARNINGS 1


//动态内存管理
//************



//int main()
//{
//	int a = 10;//变量  //在栈空间上开辟四个字节
//	int arr[10] = { 0 };//数组  //在栈空间上开辟10个字节的连续空间
//	return 0;
//}

#include<stdlib.h>
#include<stdio.h>
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");//打印错误信息
//		return 1;
//	}
//	//开辟成功
//	int i=0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);//释放ptr所指向的动态内存
//	p=NULL;//防止p变为野指针，自动置空
//	return 0;
//}




//
//#include <stdio.h>
//int main()
//{
//	//代码1
//	int num = 0;
//	scanf("%d", &num);
//	int arr[num] = { 0 };
//	//代码2
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)//判断ptr指针是否为空
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//
//	ptr = NULL;//是否有必要？
//	return 0;
//}




//calloc
//**********

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//打印数据
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc
//***********

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//初始化为1~10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//增加一些空间
//	int* ptr=realloc(p, 80);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//打印数据
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}


//
//
//
////对NULL指针的解引用操作
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值是NULL，就会有问题
//	free(p);
//}


////对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	//对动态开辟的空间的越界访问
//	for (i = 0; i < 20; i++)
//	{
//		p[i] = i;//越界访问
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////对非动态开辟内存使用free释放
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}

//// 使用free释放一块动态开辟内存的一部分
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}



//对同一块动态内存多次释放
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//重复释放
//}


//// 动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
//int main()
//{
//	test();
//	while (1);
//}
