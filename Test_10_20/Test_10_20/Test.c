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
//		printf("小于等于\n");
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
//	printf("%s\n", arr1);
//
//	return 0; 
//}



//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	//char arr2[] = "hello bit";
//	char arr2[6] = { 'a','b','c','d','e','\0'};
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}



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
////上面的简略版👇
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while(*dest++=*src++){;} //简略版
//	
//	return 0;
//}
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





//strcat
//********************
//找\0,把arr2拼接到arr1后面
//int main()
//{
//	char arr1[20] = "Hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat模拟实现
//***********************
//strcat  最好不要自己给自己追加
char* my_strcat(char* dest, const char* src)
{
	assert(dest);
	assert(src);
	char* ret = dest;
	//1.找目标空间中的\0
	while (*dest)
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return 0;
}

int main()
{
	char arr1[20] = "Hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}




