#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>




//ʹ��ð�ݺ�����˼�룬ʵ��һ����������qsort�ĺ���
//bubble_sort();
//1.ʹ��ð�������˼��
//2.�����������������ݵ�����

//void qsort(void* base,//ָ������Ҫ���������ĵ�һ��Ԫ��
	////	size_t num,//�����Ԫ�ظ���
	////	size_t size,//һ��Ԫ�صĴ�С����λ���ֽ�
	////	int (*cmp)(const void*, const void*)//����ָ������-�������ָ��ָ��ĺ������ܹ��Ƚ�baseָ�������е�����Ԫ��
	////     );



	
	
	
	
//**********************************
//����bubble_sort ������������
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
////����������int�͵�ת��Ϊchar�ͺ��4���ֽ����ݷֱ𽻻�
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
////ʵ�� ��qsort����
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
////�Ƚϴ�С
//int cmp_int(const void* p1, const void* p2)
//{
//	//��ǿ������ת��Ϊint�ͣ���������Ƚϴ�С������int��
//	return (*(int*)p1 - *(int*)p2);//  3 - 1 > 0
//}
//
////����Ҫ���������
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
//����bubble_sort ����ṹ������
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
////ʵ�� ��qsort����
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
















