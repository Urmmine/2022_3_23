#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//结构体初阶



//结构的声明

//struct Stu
//{	
//	//结构体的成员变量
//	char name[20];
//	int age;
//	char id[20];
//};


//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1,s2是全局变量


//类型

//int main()
//{
//	struct Stu s;//对象
//	//s是类型的对象
//	return 0;
//}



//结构体成员可以是数组，数字，指针，也可以是结构体


//结构体的初始化

struct B
{
	char c;
	short s;
	double d;
};


struct Stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];
};


//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30,"20220324" };
//	//结构体成员的访问
//	//. ->   (->是指针访问)
//
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}


//结构体传参

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
int main()
{
	struct Stu s = { {'w',20,3.14},"张三",30,"20220324" };

	//写一个函数打印s的内容
	print1(s);//传值调用
	print2(&s);//传址调用
	//不额外开辟空间，只传递地址的空间，效率高，可通过形参改变实参

	return 0;
}



//函数调用的参数压栈


//先进的后出，后进的先出
//向栈中存放数据：压栈

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	int c = Add(a,b);
	return 0;
}


//每一个函数的调用都会在内存的栈区上开辟一块空间



