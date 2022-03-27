#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//计算一个整数的二进制中1的个数

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> 1) & 1 == 1)
//		{
//			count++;
//		}
//
//	}
//	return count;
//}

//优化

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);//每次少一个1
//		count++;
//	}
//	return count;
//}


//对于负数无法计算

//int NumberOf1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//}


//int main()
//{
//	int n = 10;
//	int ret = NumberOf1(n);
//
//	printf("ret = %d\n", ret);
//	
//	return 0;
//}


//判断一个数字是不是2的n次方
//二进制中只有一个1
//即k&(k-1) == 0



//两个数的二进制中有几个不同位

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> 1) & 1 == 1)
//		{
//			count++;
//		}
//
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n;//异或
//	count = NumberOf1(ret);
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//获取n的二进制中的奇数位和偶数位
//	int i = 0;
//	//打印偶数位
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//打印奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}




//将一句话中的单词倒置

void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);

	char* start = arr;
	while (*start)//不为'\0'就进入
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s\n", arr);
	return 0;
}