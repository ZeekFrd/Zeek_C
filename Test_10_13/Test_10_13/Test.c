#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//ָ�����2 ����ָ��




//ð������

//��һ������������Ϊ����
// 1.��������Ԫ�رȽ�
// 2.�������Ԫ�ز�����ͽ���
// 
//*ֻ�ʺ�������������

//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//���� ��i��
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		//ÿ�˱Ƚ�
//		//��������Ԫ�رȽ�
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
//qsort �������ص㣺
//1.��������
//2.�ʺ��κ����͵�����


//void qsort(void* base,//ָ������Ҫ���������ĵ�һ��Ԫ��
//	size_t num,//�����Ԫ�ظ���
//	size_t size,//һ��Ԫ�صĴ�С����λ���ֽ�
//	int (*cmp)(const void*, const void*)//����ָ������-�������ָ��ָ��ĺ������ܹ��Ƚ�baseָ�������е�����Ԫ��
//  );


//////////
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//
////��ӡ���
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
////1.����qsort������������
//test1()
//{
//	int arr[10] = { 1,3,5,7,2,4,6,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Ĭ���������
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
////2.����qsort����ṹ������
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



















