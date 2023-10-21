#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include<assert.h>


//*****************
//strlen函数
// size_t strlen ( const char * str );
// 字符串已经 '\0' 作为结束标志，strlen函数返回的是在字符串中 '\0' 前面出现的字符个数（不包
//含 '\0' )
// ***************
//int main()
//{
//	//if (strlen("abc") - strlen("abcdef") > 0)
//	if (strlen("abc") > strlen("abcdef"))
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于等于\n");//小于等于
//	}
//	return 0;
//}



//*******************************
//strlen的模拟实现
//*******************************
//size_t my_strlen(const char* str) 
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	size_t sz= my_strlen("abc");
//	printf("%u\n", sz);
//	return 0;
//}




//***************
//strcpy函数
//***************
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);//hello bit
//
//	return 0; 
//}



//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	//char arr2[] = "hello bit";
//	char arr2[6] = { 'a','b','c','d','e','\0'};//最后面必须要有'\0'
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}



//*************************
//strcpy的模拟实现
// ***********************
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src != '\0')//
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//\0
//	return 0;
//}
//////上面的简略版是👇
////char* my_strcpy(char* dest, char* src)
////{
////	char* ret = dest;
////	assert(dest != NULL);
////	assert(src != NULL);
////	while(*dest++=*src++){;} //简略版
////	
////	return 0;
////}
//
//
//int main()
//{
//	char arr1[20] = "hello,world";
//	char arr2[] = "xxxxx";
//	my_strcpy(arr1+6, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




////*******************
////strcat
////********************
////找\0,把arr2拼接到arr1后面
//int main()
//{
//	char arr1[20] = "Hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);//Helloworld
//	return 0;
//}



////strcat模拟实现
////***********************
////strcat  最好不要自己给自己追加
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	//1.找目标空间中的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "Hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



////*****************
////strcmp
//// 比较字符串大小
////******************
//
//int main()
//{
//	int ret = strcmp("abc", "abc");
// 
// ////VS  str1大返回>)    str2大返回<0    一样大返回0
// 
//	if (ret < 0)
//	{
//		printf("abc大\n");
//	}
//	else if (ret == 0)
//	{
//		printf("一样大\n");
//
//	}
//	else
//	{
//		printf("abq大\n");
//	}
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//
//int main()
//{
//	int ret = my_strcmp("abq", "bbc");
//	printf("%d\n", ret);
//	return 0;
//}




//********************
//strncpy
//strcpy基础上增加长度的限制
//**********************

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "xx";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n",arr1);
//	return 0;
//}


////****************
////strncat
////'\0'后面追加字符串
////*****************
//
//int main()
//{
//	char arr1[20] = "abcdef\0ffffffff";
//	char arr2[] = "xxx";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);//abcdefxxx
//	return 0;
//}


////*************
////strncmp
//// 比较字符串大小
//// 在VS arr1大则返回1  arr2大则返回-1  一样大则返回0
////*********
//
//int main()
//{
//	char arr1[] = "abceef";
//	char arr2[] = "abced";
//	//比较前4个字符的大小
//	printf("%d\n", strncmp(arr1, arr2, 5));//0 一样大    
//
//	return 0;
//}




////strstr
////返回一个字符串在另一个字符串中第一次出现的地址
////一个字符串中找子字符串
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "def";//找不到会返回NULL，改进
//	char* ret = strstr(arr1, arr2);
//
//	printf("%s\n", ret);//defabcdef
//}



//改进，增加判断是否应该打印字符串
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "def";
//	char* ret = strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		//找不到时不打印字符串
//		printf("找不到\n");
//	return 0;
//}



//**********************
//strstr的模拟实现
//********************

//char* my_strstr(char* str1, char* str2)
//{
//	char* cp = str1;
//	char* s2 = str2;
//	char* s1 = cp;
//	if (s2 == NULL)
//		return s1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return cp;
//		cp++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);//bbcdef
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}





//*****************
//strtok
//**************


//int main()
//{
//	char arr[] = "z dongping@gmail.com";
//	char copy[30];
//	strcpy(copy, arr);
//
//	char sep[] = ".@ ";
//	char* ret = NULL;
//
//	for (ret = strtok(copy, sep); ret != NULL; ret = strtok(NULL, sep))
//	{
//		printf("%s\n", ret);//z   dongping   gmail   com
//	}
//	return 0;
//
//	/*char* ret = strtok(copy, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	ret = strtok(NULL, sep);
//	printf("%s\n", ret);
//	return 0;*/
//}


//错误信息报告
//strerror


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d:%s\n", i, strerror(i));
//	}
//	return 0;
//}



////例如：打开文件失败的原因
//int main()
//{
//	//C语言中可以操作文件
//	//操作文件的步骤
//	//1.打开文件
//	//2.读/写
//	//3.关闭文件
//
//	FILE* pf = fopen("date.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%d:%s\n",errno,strerror(errno));
//		perror("fopen");
//		return 0;
//	}
//
//	//读文件
//	//....
//
//	//关闭文件
//	fclose(pf);
//
//	return 0;
//}



//字符分类函数
#include<ctype.h>

int main()
{
	printf("%d\n", isupper('a'));//0 为假
	printf("%d\n", isdigit('2'));//4 为真
}










//内存操作函数
//************************

//memcpy
// 内存拷贝
//*************************
#include<string.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	//将arr1中的内容，拷贝到arr2中
//	//将arr1中的40个字节拷贝到arr2中，40个字节就是10个整型
//	memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	//memcpy适用于浮点型float数据
//	float arr1[] = { 1.0,2.0,3.0 };
//	float arr2[5] = { 0 };
//	//将arr1中的内容，拷贝到arr2中
//	//将arr1中的40个字节拷贝到arr2中，40个字节就是10个整型
//	memcpy(arr2, arr1, 12);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%f ", arr2[i]);
//	}
//	return 0;
//}



//memcpy的模拟实现
//*********************



//////函数拷贝结束后，返回目标空间的起始地址
//void* my_memcpy(void* dest,void* src,size_t num)
//{
//	//先保存地址
//	void* ret = dest;
//	//检查指针
//	assert(src && dest);
//	//逐字节交换
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr2[20] = { 0 };
//	//将arr1中的内容，拷贝到arr2中
//	//将arr1中的40个字节拷贝到arr2中，40个字节就是10个整型
//	my_memcpy(arr1+2, arr1, 21);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}





//memmove
//**********************

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 6 7 8 
//	memmove(arr1 + 2, arr1, 32);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}



////memmove的模拟实现
////*************************
//void* my_memmove(void* dest, void* src, size_t num)
//{
//  int* ret = dest;
//  assert(dest&&src);
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)//20
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 6 7 8 
//	my_memmove(arr1+4 , arr1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}






//memcmp
// 比较从ptr1和ptr2指针开始的num个字节
//*****************

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 1,2,257 };
//	int ret = memcmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	return 0;
//}







//memset
//************************

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr + 1, 'x', 4);//以字节为单位设置的
//	printf("%s\n", arr);//hxxxx bit
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);
//
//	return 0;
//}