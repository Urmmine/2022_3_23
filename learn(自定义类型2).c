#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//结构体传参

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	print1(s);//传结构体
//	print2(&s);//传结构体地址
//	//传地址效率更高
//	return 0;
//}







//位段
//设置类型空间大小，节省空间，根据需求设置内存块的大小

//位段的成员是int，unsigned int或signed 或char类型

//struct A
//{
//	//int型先开辟4个字节 - 32bit
//	int _a:2;//_a成员占2个bit位
//	int _b:5;//_b成员占5个bit位
//	int _c:10;//_c成员占10个bit位
//	//用完17bit后不够存30bit 再开辟4字节 - 32bit
//	int _d:30;//_D成员占30个bit位
//	//但是不能设置超过数据类型的大小
//};
//
////不跨平台，注重可移植的程序应避免使用位段
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//bit位从低地址开始使用，不够用时重新开辟字节位




//枚举类型


//声明枚举类型

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//	//枚举常量
//	//默认0123456
//	//递增1
//	//可初始化
//};

//int main()
//{
//	//CPP 语法检查更加严格
//	enum Color c = BLUE;
//
//	printf("%d\n", RED);//0
//	printf("%d\n", GREEN);//1
//	printf("%d\n", BLUE);//2
//	return 0;
//}


//枚举的优点
//赋初值：增加代码可读性

//也可用#define定义，但是可能命名污染，define定义的是全局的量


//用于写菜单的选择

//void menu()
//{
//
//}
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		}
//	} while (input);
//	return 0;
//}







//联合（共用体）
//成员共用同一块内存空间

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u = {10};//改变第一个字节的值
//
//	u.i = 1000;
//	u.c = 100;
//	//单独赋值
//
//	printf("%d\n", sizeof(u));
//	//联合体的大小至少是最大成员的大小
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//三者地址相同
//
//	return 0;
//}








//判断当前计算机的大小端

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//用联合体判断大小端

//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//返回1就是小端，返回0就是大端
//}
//
//int main()
//{
//	check_sys();
//
//	return 0;
//}


//联合体大小的计算
//至少是最大成员的大小
//当最大成员的大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍处

union Un
{
	char a[5];
	int i;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}










