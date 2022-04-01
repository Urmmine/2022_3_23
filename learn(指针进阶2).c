#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//一级指针传参

//void test(int* ptr, int sz)
//{
//	
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	tset(arr, sz);
//	return 0;
//}



//二级指针传参

//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一级指针
//	int** ppa = &pa;//ppa是二级指针
//	//二级指针进行传参
//	test(ppa);
//	printf("%d\n", a);
//
//
//	/*int* arr[10] = { 0 };
//	test(arr);*/
//	//函数形参为二级指针时，可以传入存放一级指针的数组，数组名本就是首元素的地址
//	return 0;
//}



//函数指针
//存放函数地址的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针 - 存放的是数组的地址 - 数组指针
//
//	//函数指针 - 存放函数地址的指针
//	printf("%p\n",&Add);
//	//数组名 ！= &数组名
//	//函数名 == &函数名
//
//	//pf - 函数指针变量
//	int (*pf)(int,int) = &Add;//Add == pf
//	int (*pf)(int, int) = Add;
//
//	int ret = (*pf)(3, 5);//先将指针pf解引用，再输入参数
//
//	int ret = Add(3, 5);
//	int ret = pf(3, 5);
//
//
//	//Add == pf
//	int ret = (*pf)(3, 5);//*没有意义
//	int ret = pf(3, 5);
//	//等价
//
//
//	printf("%d", ret);
//
//	return 0;
//}



//void test(char* str)
//{
//
//}
//int main()
//{
//	void (*pt)(char*) = &test;
//	return 0;
//}



//(*(void(*)())0)()

//int main()
//{
//	(*(void(*)())0)();
//	//调用0地址处的函数
//	//该函数无参
//	//1.void（*）（） - 函数指针类型
//	//2.（void（*）（））0 - 对0进行强制类型转换，被解释为一个函数地址
//	//3.*（void（*）（））0 - 对0地址进行解引用操作
//	//4.（*（void（*）（））0 ）（） - 调用0地址处的函数
//
//	return 0;
//}




//void (* signal(int, void(*)(int)))(int);
////signal是函数名
////1.signal函数的第一个参数类型是int，第二个参数的类型是函数指针
////该函数指针，指向一个参数为int，返回类型为void的函数
////2.signal函数的返回类型也是一个函数指针
////该函数指针，指向一个参数为int，返回类型为void的函数
////signal是一个函数声明
//
//
//typedef void(*pfun_t)(int);
////对void(*)(int)的函数指针类型重命名为pfun_t
//
//
//pfun_t siganl(int, pfun_t);
//void (*signal(int, void(*)(int)))(int);
////等价







//函数指针数组 - 存放函数指针的数组

//整型指针 int*
//整型指针数组 int* arr[5];

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//	int(*pf)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//
//	int(*pfArr[2])(int, int) = { Add, Sub };//函数指针数组
//
//	return 0;
//}



//应用

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("**********************\n");
//	printf("*****1.add  2.sub*****\n");
//	printf("*****3.nul  4.div*****\n");
//	printf("********0.exit********\n");
//	printf("**********************\n");
//}
//
//int main()
//{
//	int input = 0;
//	
//	
//		//计算器 - 计算整型变量的加减乘除
//	do {
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		//pfArr函数指针数组，用下标找函数
//		//转移表
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//			//函数指针数组改为五个元素，对应下标
//			printf("请输入2个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		} while (input);
//	return 0;
//}




//指向函数指针数组的指针
//取出指向函数指针数组的地址


//int main()
//{
//	int (*p)(int, int);//函数指针
//	int(*p2[4])(int, int);//p2是函数指针的数组
//	int(*  (*p3)[4]  )(int, int) = &p2;//取出的是函数指针数组的地址
//	//p3是一个指向函数指针数组的指针
//	return 0;
//}





//回调函数
//在B函数中用A函数的指针为参数对A进行调用


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}








#include <stdlib.h>

////qsort函数及模拟实现
////快速排序
//
////void qsort(void* base,//base中存放的是待排序数据中第一个对象的地址
////	size_t num,//元素个数
////	size_t size,//一个元素的大小，单位是字节
////	int (*cmp)(const void*, const void*));//比较大小的函数的地址，对于不同数据类型选不同的函数,由使用者选取
//
//////统一返回规则(>0 =0 <0)
//
////打印函数
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////整型数据的排序
//
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
////结构体数据的排序
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int sort_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int sort_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
//	//return strcmp(((struct Stu*)e2)->name, ((struct Stu*)e1)->name);
//	//降序
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",30} };
//	//按年龄排序
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//按名字排序
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}





//模范qsort实现冒泡排序的通用算法

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void Swap(char* buf1, char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base,
				int sz,
				int width,
				int (*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟的排序
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (cmp( (char*)base+j*width , (char*)base+(j+1)*width ) > 0)//强制类型转换
				//char* 是单位指针 - 1字节
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);

			}
		}
	}
}

void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}


//主函数

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}


//qsort函数的核心是用形参中的函数指针让函数能够实现回调函数，对不同类型的数据进行排序















