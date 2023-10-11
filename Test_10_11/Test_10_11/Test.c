#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//
//要求：时间复杂度小于O(N);
//杨氏矩阵



//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int x = 0;
//	int y = 2;
//	int flag = 0;
//	while (x <= 2 && y >= 0)
//	{
//
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("找到了，下标是：%d %d\n", x, y);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}





//封装函数

//int young_tableau_search(int arr[3][3],int k,int* px,int* py)
//{
//	int x = 0;
//	int y = *py-1;
//	
//
//	while (x <= *px - 1 && y >= 0)
//	{
//
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	*px = -1;
//	*py = -1;
//}
//
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int x = 3;
//	int y = 3;
//	young_tableau_search(arr, k, &x, &y);
//	
//	if (x == -1 && y == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d %d\n", x, y);
//	}
//	return 0;
//}






//字符串左旋
//
//题目内容：
//
//实现一个函数，可以左旋字符串中的k个字符。
//
//例如：
//
//ABCD左旋一个字符得到BCDA
//
//ABCD左旋两个字符得到CDAB

//#include<assert.h>
//
//void left_move(char* str, int k)
//{	
//	int j = 0;
//	assert(str);
//	int len = strlen(str);
//	k %= len;//将 k 除以 len 的余数赋值给 k。减少重复运算
//	for (j = 0; j < k; j++)
//	{
//		char tmp = *str;
//		int i = 0;
//		for (i = 0; i < len - 1; i++)
//		{
//			*(str + i) = *(str + i + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 7;
//	//scanf("%d", &k);//输入左旋个数
//	left_move(arr, k);
//	
//	printf("%s\n", arr);
//	return 0;
//}


#include<assert.h>
//方法二：先左边逆序，右边逆序，再整体逆序


//void revserse(char* left, char* right)
//{
//	assert(left && right);//检测不为空指针
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//void left_move(char* str, int k)
//{	
//	assert(str);
//	int len = strlen(str);
//	k %= len;
//	//左边逆序
//	revserse(str, str + k - 1);
//	//右边逆序
//	revserse(str + k, str + len - 1);
//	//整体逆序
//	revserse(str, str + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);//输入左旋个数
//	left_move(arr, k);
//	
//	printf("%s\n", arr);
//	return 0;
//}










//字符串旋转结果
//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//
//
//
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//
//给定s1 = abcd和s2 = ACBD，返回0.
//
//
//
//AABCD左旋一个字符得到ABCDA
//
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC




//1.
//#include<assert.h>
//#include<string.h>
//int is_left_move(char* s1, char* s2)
//{	
//	int j = 0;
//	
//	int len = strlen(s1);
//	
//	for (j = 0; j < len; j++)
//	{
//		char tmp = *s1;
//		int i = 0;
//		int len = strlen(s1);
//		for (i = 0; i < len - 1; i++)
//		{
//			*(s1 + i) = *(s1 + i + 1);
//		}
//		*(s1 + len - 1) = tmp;
//		if (strcmp(s1 , s2) == 0)  
//		 //strcmp函数可判断两个字符串 s1 和 s2 是否相等，使用改函数需要加 string 头文件
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "AABB";// "abcdef";
//	char s2[] = "BBAA";//"cdefab";
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}





//2.
//在一个复制加长字符串中查找另一个字符串的是否出现。

//#include<string.h>
//
//int is_left_move(char* s1, char* s2)
//{
//	//s1和s2字符串长度不相等，直接pass
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//s1和s2字符串长度相等
//	int len = strlen(s1);
//	strncat(s1, s2, len1);//复制加长后的s1包含了原s1旋转后的所有结果
//	if (strstr(s1, s2) == NULL)//找不到s2
//		return 0;
//	else
//		return 1;
//}
//
//
//int main()
//{
//	char s1[20] = "abcdef";
//	// s1复制加长后为 abcdefabcdef 可以包含旋转后的可能结果
//	char s2[] = "cdefab";
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}