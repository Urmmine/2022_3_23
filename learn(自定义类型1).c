#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//结构体 定义一种新类型
//描述复杂对象

//结构体声明

//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//直接创建变量而且是全局的
//int main()
//{
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	//b1,b2,b3是局部变量
//
//	return 0;
//}


//不完全声明
//匿名结构体类型

//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}a;

//只能用一次




//结构体的自引用

//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double b;
//};


//struct N
//{
//	int i;
//	struct N a;
//};


//自引用
//包含结构体的指针

//struct Node
//{
//	int data;
//	struct Node* next;
//};



//结构体变量的定义和初始化

//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//
//struct	B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	struct S s3 = { 'x',20};
//	struct B sb = { 3.14,{'w',100},'q' };
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}




//结构体的大小

//结构体的内存对齐的问题

//struct S
//{
//	char c1;
//	int i;
//	double d;
//};
//
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//16
//	
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//12
//	return 0;
//}

//结构体的对齐规则
//1.第一个成员在与结构体变量偏移量为0的地址处。
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处

//对齐数 =  编译器默认的一个对齐数与该成员大小的较小值
//VS默认对齐数是8

//结构体的大小为最大对齐数的整数倍

//嵌套的结构体对齐到自己的最大对齐数的整数倍处
//结构体的整体大小就是所有成员的最大对齐数（含嵌套结构体的对齐数）的整数倍


//存在内存对齐的原因
//1.平台原因：不是所有硬件平台都能访问任意地址上的任意数据
//2.性能原因：未对齐的内存要访问两次，对齐的内存只需要访问一次，提高效率

//内存对齐是拿空间换取时间的做法


//设计结构体的时候让空间小的成员集合在一起节省空间



//修改默认对齐数

//把默认对齐数改为2

//#pragma pack(2)
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//8
//	return 0;
//}

#include <stddef.h>

//用宏stddef计算偏移量

struct s
{
	char c1;
	int i;
	char c2;
};

int main()
{
	printf("%d\n", offsetof(struct s, c1));
	printf("%d\n", offsetof(struct s,c1));
	return 0;
}

















































