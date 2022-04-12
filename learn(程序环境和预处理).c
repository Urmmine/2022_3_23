#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//程序环境
//翻译环境(编译器)+运行环境



//预处理




//预定义符号

//int main()
//{
//	//日志信息
//	printf("%s\n", __FILE__);//当前文件地址
//	printf("%d\n", __LINE__);//行号
//	printf("%s\n", __DATE__);//日期
//	printf("%s\n", __TIME__);//时间
//	printf("%s\n", __FUNCTION__);
//
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %d %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//
//	//printf("%d\n", __STDC__);
//	////VS2019 不支持ANSI C
//	return 0;
//}



//#define 定义符号

#define M 1000

#define reg register
//为register这个关键字创建一个简短的名字


//int main()
//{
//	register int num = 0;
//	int m = M;
//	printf("%d\n", m);
//	return 0;
//}

#define do_forever for(;;)
//用更形象的方式表示死循环

#define CASE break;case

//int main()
//{
//	int n = 0;
//
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}


//define 定义宏
	
//把参数替换到文本中

#define SQUARE(x) x*x

#define DOUBLE(x) (x)+(x)

//int main()
//{
//	printf("%d\n", SQUARE(3));
//
//	printf("%d\n", SQUARE(3+1));//3+1*3+1
//	//参数不进行计算直接替换
//	
//	//改为#defire SQUARE(x) (x)*(x)
//	
//	printf("%d\n",10 * DOUBLE(4));//10*4+4
//	//改为#define DOUBLE(x) ((x)+(x))
//
//	return 0;
//}

//调用宏时 先看是否有define定义的量，先完成替换 再替换宏
//对于宏 不能出现递归









//#和##（在宏中使用）
//把参数插入到字符串中

#define PRINT(X) printf("the value of "#X" is %d\n",X)

#define PRINT1(X,FORMAT) printf("the value of "#X" is "FORMAT"\n",X)

//#X变为X参数的字符串形式
//#X 变为 "X"

//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	int a = 10;
//	//the value of a is 10
//	PRINT(a);
//	int b = 20;
//	PRINT(b);
//	//the value of b is 20
//	int c = 30;
//	PRINT(c);
//	//the value of c is 10
//	float d = 5.5f;
//	PRINT1(d,"%f");
//	return 0;
//}




#define CAT(X,Y) X##Y
//##把两个符号连接在一起

//int main()
//{
//	int class101 = 100;
//	printf("%d\n", CAT(class, 101));
//	return 0;
//}



//带副作用的宏参数

//尽量不使用带副作用的表达式

#define MAX(X,Y) ((X)>(Y)?(X):(Y))



//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("m = %d\n", m);
//	return 0;
//}





//宏和函数的对比

//优点：
//1.宏比函数运算速度快
//2.宏是类型无关的

//缺点：
//1.宏较长时会增加程序长度
//2.宏是没法调试的
//3.宏由于类型无关，也不够严谨（类型无关）
//4.运算符优先级的问题



#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

//int main()
//{	
//	//malloc(10, *sizeof(int));
//	//malloc(10, int);
//	int *p = MALLOC(10, int);
//	return 0;
//}



//逻辑简单用宏 逻辑复杂用函数


//宏名全部大写
//函数名不要全部大写



//#undef

//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", M);
//	return 0;
//}




//命令行定义




//条件编译

//判断是否被定义



//int main()
//{
//#ifdef PRINT
////#if define(PRINT)
//	printf("hehe\n");
//#endif 
//	return 0;
//}


//int main()
//{
//
//#ifndef HEHE
////#if !define (HEHE)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}






//#if 与 #endif

#if 0


int main()
{
#if 1
	printf("hehe\n");
#endif
	return 0;
}

#endif



//多语句形式

//int main()
//{
//#if 1 == 1
//	printf("hehe\n");
//#elif 1==2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}





//头文件的包含


//库文件的包含<>
#include <stdlib.h>

//本地文件的包含""
#include "head.h"

#include "math.h"

//先在源文件下目录查找，找不到则在库函数的头文件目录下查找

//本质区别是查找的策略的区别


#pragma once
//防止头文件被多次包含