#define _CRT_SECURE_NO_WARNINGS 1


//��̬�ڴ����
//************



//int main()
//{
//	int a = 10;//����  //��ջ�ռ��Ͽ����ĸ��ֽ�
//	int arr[10] = { 0 };//����  //��ջ�ռ��Ͽ���10���ֽڵ������ռ�
//	return 0;
//}

#include<stdlib.h>
#include<stdio.h>
//int main()
//{
//	int*p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");//��ӡ������Ϣ
//		return 1;
//	}
//	//���ٳɹ�
//	int i=0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);//�ͷ�ptr��ָ��Ķ�̬�ڴ�
//	p=NULL;//��ֹp��ΪҰָ�룬�Զ��ÿ�
//	return 0;
//}




//
//#include <stdio.h>
//int main()
//{
//	//����1
//	int num = 0;
//	scanf("%d", &num);
//	int arr[num] = { 0 };
//	//����2
//	int* ptr = NULL;
//	ptr = (int*)malloc(num * sizeof(int));
//	if (NULL != ptr)//�ж�ptrָ���Ƿ�Ϊ��
//	{
//		int i = 0;
//		for (i = 0; i < num; i++)
//		{
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);//
//	ptr = NULL;//�Ƿ��б�Ҫ��
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
//	//��ӡ����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	//�ͷ�
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
//	//��ʼ��Ϊ1~10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p[i] = i + 1;
//	}
//	//����һЩ�ռ�
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
//	//��ӡ����
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//
//
//
////��NULLָ��Ľ����ò���
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//}


////�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	//�Զ�̬���ٵĿռ��Խ�����
//	for (i = 0; i < 20; i++)
//	{
//		p[i] = i;//Խ�����
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


////�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}

//// ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}



//��ͬһ�鶯̬�ڴ����ͷ�
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}


//// ��̬�����ڴ������ͷţ��ڴ�й©��
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
