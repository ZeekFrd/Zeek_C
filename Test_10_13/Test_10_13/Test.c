#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//指针进阶2 函数指针




//冒泡排序

//有一组整数，排序为升序
// 1.两两响铃元素比较
// 2.如果相邻元素不满足就交换
// 
//*只适合整形数组排序

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//趟数 第i趟
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//每趟比较
//		//两辆相邻元素比较
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//**********************
//qsort 函数的特点：
//1.快速排序
//2.适合任何类型的数据


//void qsort(void* base,//指向了需要排序的数组的第一个元素
//	size_t num,//排序的元素个数
//	size_t size,//一个元素的大小，单位是字节
//	int (*cmp)(const void*, const void*)//函数指针类型-这个函数指针指向的函数，能够比较base指向数组中的两个元素
//  );


//////////
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//
////打印结果
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
////1.测试qsort排序整型数据
//test1()
//{
//	int arr[10] = { 1,3,5,7,2,4,6,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//默认是升序的
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr,sz);
//}
////////




//2.
/////////////////
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_age(const void* p1,const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//
////2.测试qsort排序结构体数据
//void test2()
//{
//	struct Stu arr[] = { {"x",3},{"y",2},{"z",1} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}



//3.
//////////////
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//
//void test3()
//{
//	struct Stu arr[] = { {"y",3},{"x",2},{"z",1} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//
////////////////
//
//
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}



















