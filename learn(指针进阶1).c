#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



//�ַ�ָ��

//int main()
//{
//	char ch = 'q';
//	char* pc = &ch;
//
//	//�������ǰ�"hello bit"����ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";
//
//
//
//
//	char* str1 = "hello bit.";
//	char* str2 = "hello bit.";
//	//�����ַ�����ֻ��һ�����ݣ���ֻ��һ����ַ
//
//	
//	return 0;
//}


//ָ������

//int main()
//{
//	//���� - �����д�ŵ���ָ�루��ַ��
//	int* arr[3];//�������ָ�������
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
//			//�ȼ�
//			//ģ���ά����
//		}
//	}
//
//	return 0;
//}




//����ָ��
// ����ָ�� int *p - ָ�����͵�ָ��
// �ַ�ָ�� char *pc - ָ���ַ���ָ��
// ����ָ�� - ָ�������ָ��
// 
//��һ��ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char ch = 'w';
//	char* pa = &ch;
//
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr - ����ָ�룬parr��ŵ���arr�ĵ�ַ
//
//	arr;//������Ԫ�صĵ�ַ - arr[0]�ĵ�ַ
//
//	return 0;
//}


//����

//int main()
//{
//	double* d[5];
//	double* (*pd)[5] = &d;
//	return 0;
//}


//&��������������

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//�洢��int���͵�����ָ����
//	printf("%p\n", arr+1);//��4�ֽڣ�һ�����ͣ�
//	printf("%p\n", &arr);//�洢��int���͵�����ָ����
//	printf("%p\n", &arr+1);//��40�ֽڣ�һ��������/ȡ��������Ԫ�ظ�����
//
//
//	return 0;
//}



//��������������Ԫ�صĵ�ַ��
//�������������⣺
//1.sizeof���������� - ��������ʾ�������飬�����������Ĵ�С����λ���ֽ�
//2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i=0; i < 10; i++)
//	{
//		printf("%d ",* ((*pa) + 1));//*pa = arr  �൱����Ԫ�صĵ�ַ
//	}
//	return 0;
//}



//��ά����

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

//p��һ��һά����ָ��
void print2(int(*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ",* (*(p + i) + j));//*(p+i)��ʾ��i�еĵ�һ��Ԫ�صĵ�ַ
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	print2(arr, 3, 5);//arr��ʾ������Ԫ�صĵ�ַ����ά������Ԫ�صĵ�ַ���ǵ�һ��
	return 0;
}


//����

int main()
{
	int arr[5];//��������
	int* parr1[10];//����ָ�������
	int(*parr2)[10];//����ָ��,ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ��������int
	int(*parr3[10])[5];//�������ָ������飬�������ܹ����10������ָ�룬ÿ������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
	return 0;
}




//������� ָ�����


//һά���鴫��

void test(int arr[])//��
{}
void test(int arr[10])//��
{}
void test(int *arr)//��
{}
void test2(int *arr[20])//��
{}
void test2(int **arr)//��  //����ָ��
{}
int main()
{
	int arr[10] = { 0 };
	int* arr2[20] = { 0 };
	test(arr);
	test2(arr2);
	return 0;
}


//��ά���鴫��

void test(int arr[3][5])//��
{}
void test(int arr[][])//���в���ʡ��
{}
void test(int arr[][5])//��
{}
//

void test(int *arr)//������ʾ��һ��
{}
void test(int *arr[5])//��
{}
void test(int (*arr)[5])//��
{}
void test(int **arr)//��
{}