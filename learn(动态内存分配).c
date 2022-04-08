#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//动态内存分配
//malloc calloc free realloc
//在堆区上开辟



//动态内存开辟

//动态内存函数
//malloc
//void* calloc(size_t size)

//int main()
//{
//	//假设开辟10个int的空间
//	int arr[10] = { 0 };
//
//	//动态内存开辟的方法
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//	}
//
//	//回收空间
//	free(p);
//	//free只能释放堆上开辟的空间
//	
//	p = NULL;//置空避免非法访问
//	
//
//	return 0;
//}



//calloc
//void* calloc(size_t num,size_t size)
//calloc可对内存初始化，初始化为0

//int main()
//{
//	int* p = calloc(10,sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc
//void* relloc(void*memblock,size_t size)
//让动态内存管理更加灵活

//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("main");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 5;
//	}
//	//这里需要p指向的空间更大，需要20个int的空间
//	//realloc调整空间
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	//后面空间足够时返回当前地址
//	//后面空间不够时重新找空间并将原数据拷贝过去，返回新空间的地址
//	//找不到合适的空间调整大小时返回空指针
//
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)realloc(NULL, 40);//功能类似于malloc，就是直接在堆区开辟40个字节
//	free(p);
//	p = NULL;
//	return 0;
//}





//动态内存开辟常见错误

//1.对NULL指针的解引用操作

//int main()
//{
//	int* p = (int*)malloc(1000000000000000);
//	//对malloc函数的返回值做判空处理
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//2.对动态开辟空间的越界访问

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//越界访问
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



//3.使用free释放非动态开辟的空间

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//使用
//
//	free(p);//使用free释放非动态开辟的空间
//	p = NULL;
//
//	return 0;
//}


//4.使用free释放动态内存中的一部分

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0;i < 5; i++)
//	{
//		*p++ = i;
//	}
//	free(p);//需要从起始位置释放
//	p == NULL;
//	return 0;
//}




//5.对同一块动态内存的多次释放

//int main()
//{
//	int* p = (int*)malloc(100);
//	//使用
//	//释放
//	free(p);
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//6.动态开辟的空间忘记释放（内存泄露）

//两种回收方式
//1.主动回收free
//2.程序结束

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//	//使用
//}
//int main()
//{
//	test();
//	//...
//	return 0;
//}






//内存分布

//int* test()
//{
//	int x = 10;
//	//局部变量在栈区上开辟空间，出局部后销毁
//	//返回&x非法访问内存
//
//	//使用malloc在堆上开辟空间可保留
//	return (&x);
//}
//int main()
//{
//	int* x = test();
//	//
//	return 0;
//}





//柔性数组

//C99结构中最后一个元素允许是未知大小的数组，叫做柔性数组

//1.柔性数组前至少有一个成员
//2.sizeof返回的结构大小不包括柔性数组的内存
//3.包含柔性数组成员的结构用malloc（）函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

//形式

struct S
{
	int n;
	int arr[];//大小是未知的
	//arr是柔性数组
};

//struct S
//{
//	int n;
//	int arr[0];
//};


//计算大小

int main()
{
	//struct S s = { 0 };

	//期望arr的大小是10个整型
	struct S* ps = malloc(sizeof(struct S)+(10*sizeof(int));
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//增加
	struct S* ptr = (struct S*)relloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//释放
	free(ptr);
	ptr = NULL;
	//printf("%d\n", sizeof(s));
	return 0;
}

//好处
//1.方便内存释放
//2.有利于访问速度





































