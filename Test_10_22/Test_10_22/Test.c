#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


//struct SN
//{
//	char c;
//	int i;
//	//.i  .c  ����Ҫ����˳��
//}sn1 = { 'q',100 }, sn2 = { .i = 200,.c = 'w' };//ȫ�ֱ���
//
//int main()
//{
//	//struct SN sn3, sn4;//�ֲ�����
//	printf("%c %d\n", sn2.c, sn2.i);
//	return 0;
//}






//struct SN
//{
//	char c;
//	int i;
//	//.i  .c  ����Ҫ����˳��
//}sn1 = { 'q',100 }, sn2 = { .i = 200,.c = 'w' };//ȫ�ֱ���
//
//struct S
//{
//	double d;
//	//�ṹ��������ṹ��ĳ�ʼ��
//	struct SN sn;
//	int arr[10];
//};
//
//int main()
//{
//	//struct SN sn3, sn4;//�ֲ�����
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
//�ṹ���ڴ����
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
//	printf("%d\n", offsetof(struct S1, c1));//���Լ���ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
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





//Ƕ�׽ṹ��Ĵ�С
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4
//{
//	char c1;
//	struct S3 s3;//Ƕ�׽ṹ��
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
//	// offsetof�� ���ͷ�ļ�<stddof>���Լ���ṹ���Ա����ڽṹ����ʼλ�õ�ƫ����
//	printf("%d\n",offsetof(struct S1,c1));
//	printf("%d\n",offsetof(struct S1,i));
//	printf("%d\n",offsetof(struct S1,c2));
//	return 0;
//}




//��ռ�ÿռ�С�����御��������һ��
//����

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




//////�޸�Ĭ�϶�����
//#pragma pack(8)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//#pragma pack(2)//����Ĭ�϶�����Ϊ2
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	//����Ľ��
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//	return 0;
//}