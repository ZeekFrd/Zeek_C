#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>




//使用冒泡函数的思想，实现一个功能类似qsort的函数
//bubble_sort();
//1.使用冒泡排序的思想
//2.适用于任意类型数据的排序

//void qsort(void* base,//指向了需要排序的数组的第一个元素
	////	size_t num,//排序的元素个数
	////	size_t size,//一个元素的大小，单位是字节
	////	int (*cmp)(const void*, const void*)//函数指针类型-这个函数指针指向的函数，能够比较base指向数组中的两个元素
	////     );



	
	
	
	
//**********************************
//测试bubble_sort 排序整型数据
//**********************************



//void print(int base[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", base[i]);
//	}
//}
//
//
//
////交换，两个int型的转换为char型后各4个字节内容分别交换
//void Swap(char* buf1,char* buf2,int size)
//{
//	int i = 0;
//	char tmp = 0;
//	for (i = 0; i < size; i++)
//	{
//		tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//	
//}
////实现 类qsort函数
//void bubble_sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//	
//}
//
////比较大小
//int cmp_int(const void* p1, const void* p2)
//{
//	//先强制类型转化为int型，再相减来比较大小，返回int型
//	return (*(int*)p1 - *(int*)p2);//  3 - 1 > 0
//}
//
////输入要排序的数组
//void test1()
//{
//	int arr[10] = { 3,1,5,2,4,7,9,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr,sz);
//}

//int main()
//{
//	test1();
//	
//	return 0;
//}




//**********************************
//测试bubble_sort 排序结构体数据
//**********************************



//void print(struct Stu* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("Name: %s\n", arr[i].name);
//		printf("Age: %d\n", arr[i].age);
//	}
//}
//
//
//
//struct Stu 
//{
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1,char* buf2,int size)
//{
//	int i = 0;
//	char tmp=0;
//	for (i = 0; i < size; i++)
//	{
//		tmp = *buf1;
//		*buf1 =*buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
////实现 类qsort函数
//void bubble_sort(void* base, int num, int size, int (*cmp)(const void*, const void*))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//	
//}
//
//void test2()
//{
//	struct Stu arr[] = { {"z",1},{"d",2},{"p",3} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	print(arr, sz);
//
//}
//
//
//int main()
//{
//	test2();
//	return 0;
//}
















