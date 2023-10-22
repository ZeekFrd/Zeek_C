#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

//��ϰ


//1.strlen��ģ��ʵ��
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


//2.strcpy��ģ��ʵ��
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





//strcmp��ģ��ʵ��
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
//srcat������ģ��ʵ��
//�ӳ��ַ���
//***********************


//void* my_strcat(char* dest, char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//��'\0'
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
//strstr������ģ��ʵ��
// �ж�Ӧ���ַ�������û�г�����һ���ַ������оͷ��ص�һ�γ��ֵ��׵�ַ
//***********************


//char* my_strstr(char* str1, char* str2)
//{
//	assert(str1 && str2);
//	//�����ַ
//	char* cp = str1;
//	char* s1 = str1;
//	char* s2 = str2;
//	//��s2Ϊ��
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
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//***********************
//memcpy������ģ��ʵ��
//���ص����ڴ濽��
//***********************

//
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	//�ȱ����ַ
//	void* ret = dest;
//	//���ָ��
//	assert(dest && src);
//	//���ֽڽ���
//	while (num--)
//	{
//		//�����(char*)dest,����dest���ַ���ָ�����ͣ�dest�������ֻ���ԭ������
//		*((char*)dest) = *((char*)src);
//		//dest���ַ�ָ�����͵�ַ��1
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
//memmove������ģ��ʵ��
//�����ص��ڴ�Ŀ���
//****************************


//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	//ǰ->��
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	//��->ǰ
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

