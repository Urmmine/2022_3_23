#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��

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

//ˮ�ɻ��� - 3λ������

//0~100000֮���������

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		//�ж�1�Ƿ�Ϊ������
//		
//		//1.����i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


#include <assert.h>

//һ�������������ַ�������

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


//��ӡ����

//int main()
//{
//	int line = 0;
//	scanf("%d",&line);//7
//	//��ӡ�ϰ벿��
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
//	//�°�
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



//һԪһƿ��ˮ��������ƿһƿ��ˮ����ʮԪ�ȶ���ƿ

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	//��ʼ��
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}




//��������ʹ����λ��ż��ǰ��

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
		//��ǰ������ż��
		while ((left<right) && arr[left] % 2 == 1)
		{
			left++;
		}
		//�Ӻ���ǰ������
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