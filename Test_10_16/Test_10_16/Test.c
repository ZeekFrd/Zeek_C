#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//数组名的理解
//数组名是数组首元素的地址
//但是有两个例外：
// //👇
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址。




//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//整个数组的大小，4*4=16
//	printf("%d\n", sizeof(a+0));//数组名a是数组首元素的地址，a+0还是首元素，大小为4个字节
//	printf("%d\n", sizeof(*a));//数组名a是数组首元素的地址，*a就是首元素，大小就是4个字节
//	printf("%d\n", sizeof(a+1));//数组名a是数组首元素的地址，a+1是第二个元素的地址，地址大小为4/8
//	printf("%d\n", sizeof(a[1]));//第二个元素的大小就是4个字节
//	printf("%d\n", sizeof(&a));//&a是数组的地址，数组的地址也是地址，是地址4/8个字节
//	printf("%d\n", sizeof(*&a));//16个字节
//	//sizeof(*&a)-->siaeof(a)
//	//&a-->int(*)a
//
//	printf("%d\n", sizeof(&a+1));//&a+1相当于是&a跳过了整个数组，&a+1依然是地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&a[0]));//&a[0]是首元素的地址，4/8个字节
//	printf("%d\n", sizeof(&a[0]+1));//&a[0]是首元素的地址，&a[0]+1就是第二个元素的地址，是地址就是4/8个字节
//
//	return 0;
//}


int main()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr));//
	printf("%d\n", sizeof(arr+0));
	printf("%d\n", sizeof(*arr));
	printf("%d\n", sizeof(arr[1]));
	printf("%d\n", sizeof(&arr));
	printf("%d\n", sizeof(&arr+1));
	printf("%d\n", sizeof(&arr[0]+1 ));
}













//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	
//	printf("%d\n", strlen(arr));//因为字符数组arr中没有\0，所以在求字符串长度的时候，会一直往后找，产生的结构就是随机值
//	printf("%d\n", strlen(arr + 0));//arr + 0是首元素的地址，和第一个一样，也是随机值
//	//printf("%d\n", strlen(*arr));//err, arr是数组首元素的地址，*arr就是数组首元素，就是'a'-97
//	//strlen函数参数的部分需要传一个地址，当我们传递的是'a'时，'a'的ASCII码值是97，那就是将97作为地址传参
//	//strlen就会从97这个地址开始统计字符串长度，这就非法访问内存了
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//&arr是数组的地址,数组的地址和数组首元素的地址，值是一样的，那么传递给strlen函数后，依然是从数组的第一个元素的位置开始往后统计
//
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址。结果也是随机值
//
//
//	printf("%d\n", sizeof(arr));//数组名单独放在sizeof内部，这里的arr表示整个数组，计算的是整个数组的大小，单位是字节,总共6个字节
//	//char [6]
//	printf("%d\n", sizeof(arr + 0));//arr表示数组首元素的地址，arr+0还是数组首元素的地址，是地址就是4/8个字节
//	//char*
//	printf("%d\n", sizeof(*arr));//arr表示数组首元素的地址,*arr就是首元素，大小1个字节
//	//char
//	printf("%d\n", sizeof(arr[1]));//arr[1]就是第二个元素，大小是1个字节
//	printf("%d\n", sizeof(&arr));//&arr是数组的地址，但是数组的地址也是地址，是地址就是4/8
//	printf("%d\n", sizeof(&arr + 1));//&arr + 1是跳过整个数组后的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr[0] + 1));//第二个元素的地址，是4/8个字节
//
//	return 0;
//}
