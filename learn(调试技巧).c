#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//调试技巧 

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
//	//F9设置断点，F5直接调试运行到断点，断点前无bug
//	for (i = 0; i < 10; i++)
//	{
//		//F10逐过程调试，F11逐语句调试（更加细粒）
//		test();
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}


//计算1至n的阶乘之和

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
//		ret = 1;//ret要变回1
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;//求完2的阶乘时ret = 2，ret以初始值2进入循环
//		}
//		sum += ret;
//	}
//	//调试解决的是运行时错误，不是语法错误
//	//预期与实际代码结果
//	printf("%d\n", sum);
//	return 0;
//}



//陷阱

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//i和arr是局部变量，在栈区上生成，从高地址开始使用
//	//先定义arr再定义i不会死循环，会越界范围
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	//&i == &arr[12]
//	//一到arr[12]就改变i的值为0
//	//死循环的执行，没机会报错
//	return 0;
//}














