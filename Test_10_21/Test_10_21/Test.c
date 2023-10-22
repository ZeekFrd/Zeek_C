#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//练习


//1.strlen的模拟实现
//******************************
// 
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
//int main()
//{
//	size_t sz = my_strlen("abc");
//	printf("%u\n", sz);
//	return 0;
//}


//2.strcpy的模拟实现
//************************

//void* my_strcpy(char* str1, char* str2)
//{
//	char* ret = str1;
//	assert(str1 && str2);
//
//	while (*str2!='\0')
//	{
//		*str1 = *str2;
//		str2++;
//		str1++;
//	}
//	*str1 = *str2;//'\0'
//	return 0;
//}
//
//int main()
//{
//	char arr1[20] = "Hello world";
//	char arr2[] = "xxxxx";
//	my_strcpy(arr1+6, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}





//strcmp的模拟实现
//***********************

//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++; 
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}

//int my_strcmp(const char* src, const char* dst)
//{
//	int ret = 0;
//	assert(src != NULL);
//	assert(dst != NULL);
//	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)
//		++src, ++dst;
//	if (ret < 0)
//		ret = -1;
//	else if (ret > 0)
//		ret = 1;
//	return(ret);
//}
//
//
//int main()
//{
//	int ret = strcmp("abq","abcq");
//	printf("%d\n", ret);
//	return 0;
//}


//***********************
//srcat函数的模拟实现
//加长字符串
//***********************


//void* my_strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//找'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "Hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}






//**************************
//strstr函数的模拟实现
// 判断应该字符串中有没有出现另一个字符串，有就返回第一次出现的首地址
//***********************


//char* my_strstr(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//保存地址
//	char* cp = str1;
//	char* s1 = str1;
//	char* s2 = str2;
//	//若s2为空
//	if (s2 == NULL)
//	{
//		return s1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//			while (*s1 && *s2 && *s1 == *s2)
//			{
//				s1++;
//				s2++;
//			}
//		
//		if (*s2 == '\0')
//		return cp;
//		cp++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "bcd";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//	{
//		printf("%s\n", ret);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//***********************
//memcpy函数的模拟实现
//不重叠的内存拷贝
//***********************

//
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	//先保存地址
//	void* ret = dest;
//	//检查指针
//	assert(dest && src);
//	//逐字节交换
//	while (num--)
//	{
//		//这里的(char*)dest,代表dest的字符型指针类型，dest单独出现还是原有类型
//		*((char*)dest) = *((char*)src);
//		//dest以字符指针类型地址加1
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int ret = my_memcpy(arr2, arr1, 40);
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}
//





//********************************
//memmove函数的模拟实现
//用于重叠内存的拷贝
//****************************


//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//前->后
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	//后->前
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr , arr + 1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

