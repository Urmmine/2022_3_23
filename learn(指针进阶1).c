#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//字符指针

//int main()
//{
//	char ch = 'q';
//	char* pc = &ch;
//
//	//本质上是把"hello bit"这个字符串的首字符的地址存储在了ps中
//	char* ps = "hello bit";
//
//
//
//
//	char* str1 = "hello bit.";
//	char* str2 = "hello bit.";
//	//常量字符串，只有一份数据，即只有一个地址
//
//	
//	return 0;
//}


//指针数组

//int main()
//{
//	//数组 - 数组中存放的是指针（地址）
//	int* arr[3];//存放整型指针的数组
//	
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = {a,b,c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//			//等价
//			//模拟二维数组
//		}
//	}
//
//	return 0;
//}




//数组指针
// 整型指针 int *p - 指向整型的指针
// 字符指针 char *pc - 指向字符的指针
// 数组指针 - 指向数组的指针
// 
//是一种指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pa = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr - 数组指针，parr存放的是arr的地址
//
//	arr;//数组首元素的地址 - arr[0]的地址
//
//	return 0;
//}


//例子

//int main()
//{
//	double* d[5];
//	double* (*pd)[5] = &d;
//	return 0;
//}


//&数组名与数组名

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//存储在int类型的整型指针中
//	printf("%p\n", arr+1);//跳4字节（一个整型）
//	printf("%p\n", &arr);//存储在int类型的数组指针中
//	printf("%p\n", &arr+1);//跳40字节（一整个数组/取决于数组元素个数）
//
//
//	return 0;
//}



//数组名是数组首元素的地址：
//但是有两个例外：
//1.sizeof（数组名） - 数组名表示整个数组，计算的是数组的大小，单位是字节
//2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i=0; i < 10; i++)
//	{
//		printf("%d ",* ((*pa) + 1));//*pa = arr  相当于首元素的地址
//	}
//	return 0;
//}



//二维数组

void print1(int arr[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

//p是一个一维数组指针
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ",* (*(p + i) + j));//*(p+i)表示第i行的第一个元素的地址
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);//arr表示数组首元素的地址，二维数组首元素的地址就是第一行
	return 0;
}


//例子

int main()
{
	int arr[5];//整型数组
	int* parr1[10];//整型指针的数组
	int(*parr2)[10];//数组指针,指向一个数组，该数组10个元素，每个元素类型是int
	int(*parr3[10])[5];//存放数组指针的数组，该数组能够存放10个数组指针，每个数组指针指向的数组有5个元素，每个元素是int
	return 0;
}




//数组参数 指针参数


//一维数组传参

void test(int arr[])//对
{}
void test(int arr[10])//对
{}
void test(int *arr)//对
{}
void test2(int *arr[20])//对
{}
void test2(int **arr)//对  //二级指针
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}


//二维数组传参

void test(int arr[3][5])//对
{}
void test(int arr[][])//错，列不能省略
{}
void test(int arr[][5])//对
{}
//

void test(int *arr)//错，仅表示第一行
{}
void test(int *arr[5])//错
{}
void test(int (*arr)[5])//对
{}
void test(int **arr)//错
{}