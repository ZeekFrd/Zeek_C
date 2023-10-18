#define _CRT_SECURE_NO_WRANINGS 1

#include <stdio.h>
#include<string.h>


//********************************
///总结：数组名的意义：
///1.sizeof(数组名)，这里的数组名表示整个数组，取出的是整个数组的地址。
///2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
///3.除此以外所有的数组都表示首元素的地址。
//********************************





//编译+链接-->可执行程序-->运行-->结果
//sizeof                 s=a+2

//表达式都有2个属性
//1.值属性  9
//2.类型属性  sizeof只关注类型属性
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
////假设p的值为0x100000。如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);//0x100014
//	printf("%p\n", (unsigned long)p + 0x1);//整形加1就是加1//0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}


//****************
 

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//输出4  2000000
//	return 0;
//}



//*********************

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	//相当于数组a[]={{"work"},{"at"},{"alibaba"}}
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






