#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	//ptr[-1] = *(ptr-1) 
//	//二者等价
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	//2 5
//	return 0;
//}




//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O（N）；

int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if(arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//时间复杂度O(N)：最坏的情况下遍历数组
	
	//0(1):遍历的次数为常数，与数据的量无关


	//查找一个数字

	////遍历的方法不满足
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		if (arr[i][j] == 7)
	//		{

	//		}
	//	}
	//}

	int k = 7;
	//如果找到，返回1，找不到返回0
	int x = 3;
	int y = 3;
	int ret = find_num(arr, &x, &y, k);
	//&x &y 两个作用：1.传入参数 2.带回值
	if (ret == 1)
	{
		printf("找到了");
		printf("下标是:%d %d", x, y);
	}
	else
	{
		printf("找不到");
	}
	return 0;
}







#include <assert.h>

//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//void string_rotate(char* str, int k)
//{
//	assert(str);
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str;
//		//2.把后边的n-1个字符从后往前挪
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp放在最后
//		*(str + n - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_rotate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}











//写一个函数，判断一个字符串是否为另一个字符串旋转之后的字符串


//int is_string_rotate(char* str1, char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		//每次左旋转一个字符
//		char tmp = *str1;
//		//2.把后边的n-1个字符从后往前挪
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//3.tmp放在最后
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}







int is_string_rotate(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1.str1字符串后面追加一个str
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, 5);
	//2.判断str2是否为str1的子串
	char* ret = strstr(str1, str1);

	return ret != NULL;
	
	//AABCDAABCD
	//BCDAA
}


int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}





////strcat 和strncat
//int main()
//{
//	char arr[20] = "hello";
//	//strcat(arr, "bit");//库函数strcat是在arr后追加字符串，不可追加自己
//	strncat(arr, arr,5);
//	printf("%s\n", arr);
//	return 0;
//}