#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//
//Ҫ��ʱ�临�Ӷ�С��O(N);
//���Ͼ���



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
//			printf("�ҵ��ˣ��±��ǣ�%d %d\n", x, y);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}





//��װ����

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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d %d\n", x, y);
//	}
//	return 0;
//}






//�ַ�������
//
//��Ŀ���ݣ�
//
//ʵ��һ�����������������ַ����е�k���ַ���
//
//���磺
//
//ABCD����һ���ַ��õ�BCDA
//
//ABCD���������ַ��õ�CDAB

//#include<assert.h>
//
//void left_move(char* str, int k)
//{	
//	int j = 0;
//	assert(str);
//	int len = strlen(str);
//	k %= len;//�� k ���� len ��������ֵ�� k�������ظ�����
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
//	//scanf("%d", &k);//������������
//	left_move(arr, k);
//	
//	printf("%s\n", arr);
//	return 0;
//}


#include<assert.h>
//������������������ұ���������������


//void revserse(char* left, char* right)
//{
//	assert(left && right);//��ⲻΪ��ָ��
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
//	//�������
//	revserse(str, str + k - 1);
//	//�ұ�����
//	revserse(str + k, str + len - 1);
//	//��������
//	revserse(str, str + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);//������������
//	left_move(arr, k);
//	
//	printf("%s\n", arr);
//	return 0;
//}










//�ַ�����ת���
//
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//
//
//
//���磺����s1 = AABCD��s2 = BCDAA������1
//
//����s1 = abcd��s2 = ACBD������0.
//
//
//
//AABCD����һ���ַ��õ�ABCDA
//
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC




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
//		 //strcmp�������ж������ַ��� s1 �� s2 �Ƿ���ȣ�ʹ�øĺ�����Ҫ�� string ͷ�ļ�
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
//��һ�����Ƽӳ��ַ����в�����һ���ַ������Ƿ���֡�

//#include<string.h>
//
//int is_left_move(char* s1, char* s2)
//{
//	//s1��s2�ַ������Ȳ���ȣ�ֱ��pass
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//s1��s2�ַ����������
//	int len = strlen(s1);
//	strncat(s1, s2, len1);//���Ƽӳ����s1������ԭs1��ת������н��
//	if (strstr(s1, s2) == NULL)//�Ҳ���s2
//		return 0;
//	else
//		return 1;
//}
//
//
//int main()
//{
//	char s1[20] = "abcdef";
//	// s1���Ƽӳ���Ϊ abcdefabcdef ���԰�����ת��Ŀ��ܽ��
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