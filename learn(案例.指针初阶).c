#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//写一个函数打印arr数组的内容，不使用数组下标，使用指针

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + sz - 1;
//	int i = 0;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	return 0;
//}



#include <math.h>

//水仙花数 - 3位自幂数

//0~100000之间的自幂数

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//判断1是否为自幂数
//		
//		//1.计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//
//		//3.判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


#include <assert.h>

//一个函数，逆序字符串内容

//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		arrert(str);
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//打印菱形

//int main()
//{
//	int line = 0;
//	scanf("%d",&line);//7
//	//打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0;j<line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-i-1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//一元一瓶汽水，两个空瓶一瓶汽水，二十元喝多少瓶

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//开始换
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}




//调整数组使奇数位于偶数前面

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;

	while (left < right)
	{
		//从前往后找偶数
		while ((left<right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//从后往前找奇数
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		//
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}