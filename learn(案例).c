#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//����һ�������Ķ�������1�ĸ���

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

//�Ż�

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);//ÿ����һ��1
//		count++;
//	}
//	return count;
//}


//���ڸ����޷�����

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


//�ж�һ�������ǲ���2��n�η�
//��������ֻ��һ��1
//��k&(k-1) == 0



//�������Ķ��������м�����ͬλ

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
//	int ret = m ^ n;//���
//	count = NumberOf1(ret);
//	printf("%d\n", count);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ȡn�Ķ������е�����λ��ż��λ
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}




//��һ�仰�еĵ��ʵ���

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
	while (*start)//��Ϊ'\0'�ͽ���
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