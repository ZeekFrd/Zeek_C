#define _CRT_SECURE_NO_WRANINGS 1

#include <stdio.h>
#include<string.h>


//********************************
///�ܽ᣺�����������壺
///1.sizeof(������)���������������ʾ�������飬ȡ��������������ĵ�ַ��
///2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
///3.�����������е����鶼��ʾ��Ԫ�صĵ�ַ��
//********************************





//����+����-->��ִ�г���-->����-->���
//sizeof                 s=a+2

//���ʽ����2������
//1.ֵ����  9
//2.��������  sizeofֻ��ע��������
//s=a+2 --> short

//int main()
//{
//	int a = 7;
//	short s = 4;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}







//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}* p = (struct Test*)0x100000;
//
////����p��ֵΪ0x100000�����±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//���μ�1���Ǽ�1//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}


//****************
 

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//���4  2000000
//	return 0;
//}



//*********************

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//�൱������a[]={{"work"},{"at"},{"alibaba"}}
//
//
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//*/******************


int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;

	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
	
}






