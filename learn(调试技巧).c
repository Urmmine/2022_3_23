#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//���Լ��� 

//void test()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i+1;
//	}
//	//F9���öϵ㣬F5ֱ�ӵ������е��ϵ㣬�ϵ�ǰ��bug
//	for (i = 0; i < 10; i++)
//	{
//		//F10����̵��ԣ�F11�������ԣ�����ϸ����
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}


//����1��n�Ľ׳�֮��

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//3
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;//retҪ���1
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;//����2�Ľ׳�ʱret = 2��ret�Գ�ʼֵ2����ѭ��
//		}
//		sum += ret;
//	}
//	//���Խ����������ʱ���󣬲����﷨����
//	//Ԥ����ʵ�ʴ�����
//	printf("%d\n", sum);
//	return 0;
//}



//����

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//i��arr�Ǿֲ���������ջ�������ɣ��Ӹߵ�ַ��ʼʹ��
//	//�ȶ���arr�ٶ���i������ѭ������Խ�緶Χ
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//&i == &arr[12]
//	//һ��arr[12]�͸ı�i��ֵΪ0
//	//��ѭ����ִ�У�û���ᱨ��
//	return 0;
//}














