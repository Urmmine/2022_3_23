#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//指针

//int main()
//{
//	int a = 10;//a占4个字节
//	int* pa = &a;//拿到的是a的4个字节的中第一个字节的地址
//	*pa = 20;//*pa就是a
//	//pa 指针变量
//
//	return 0;
//}


//指针类型的意义

//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了，指针走一步，能走多元（步长）


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//	//只有一字节的权限
//
//	int* pa = &a;
//	*pa = 0;
//	//有四个字节的权限
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);//加4个字节
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//加一个字节
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	//char* p = arr;
//	//一个字节一个字节访问
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//+i时+多少字节取决于p的指针类型
//	}
//	return 0;
//}




//野指针


//1.指针未初始化

//int main()
//{
//	int* p;//p是一个局部的指针变量，不初始化时为默认值
//	*p = 20;//非法访问内存
//
//	return 0;
//}



//2.指针越界访问

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//3.指针指向的空间释放

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	//调用test，return &a后，a被销毁
//	*p = 20;
//	//再对a操作出问题
//	return 0;
//}


//如何规避野指针

//1.指针要初始化

//int main()
//{
//	//不知道p应该初始化为什么地址时，初始化为空指针
//	int* p = NULL;
//	return 0;
//}

//int main()
//{
//	//明确知道初始化的值
//	int a = 10;
//	int* ptr = &a;
//	return 0;
//}



//2.小心指针越界
//C语言本身不会检查数据的越界行为

//3.指针指向空间释放时及时置NULL

//4.指针使用之前进行有效性的检查(判断)

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//	return 0;
//}



//指针运算
//1.指针+-整数
//2.指针-指针
//3.指针的关系运算(比较大小)


//指针+-整数 与 指针的关系运算

//int main()
//{
//	int arr[10] = { 1,2,34,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)//指针的关系运算
//	{
//		printf("%d\n", *p);
//		p++;//指针+-整数
//	}
//	return 0;
//}




//指针-指针

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	//指针-指针得到的是两个指针之间的元素个数
//	//前提是两个指针指向同一块空间
//	return 0;
//}


//可用于计算元素个数

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");//字符串传参传的是a的地址
//	printf("%d\n", len);
//	//知道a和\0的地址就可以算字符串长度
//	return 0;
//}



//指针的关系运算

#define N_VALUES 5

int main()
{
    int values[10] = { 0 };
    int* vp = 0;
    for (vp = &values[N_VALUES]; vp > &values[0];)
    {
        *--vp = 0;
    }
}


//不建议采用以下代码
//不建议地址向前越界

int main()
{
    int values[10] = { 0 };
    int* vp = 0;
    for (vp = &values[N_VALUES]; vp > &values[0];vp--)
    {
        *vp = 0;
    }
}



//指针和数组

//int main()
//{
//    int arr[10] = { 0 };
//    printf("%p\n", arr);//数组名是数组首元素的地址
//    printf("%p\n", &arr[0]);
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%p <==> %p\n",& arr[i], p + i);
//        //p + i产生的就是下标为i的地址
//    }
//    return 0;
//}



//指针p与数组名都是地址

int main()
{
    int arr[10] = { 1,2,3,4,5 };
    int* p = arr;
    //p[2] = *(p+2) = arr[2] = *(2+p) = *(2+arr) = 2[arr]
    printf("%d\n", arr[2]);
    printf("%d\n", 2[arr]);
    printf("%d\n", p[2]);

    return 0;
}

    
//二级指针

int main()
{
    int a = 10;
    int* pa = &a;//pa是指针变量，一级指针

    pa;//pa也是个变量,&pa取出pa在内存中的起始地址
    int **ppa = &pa;//pa的类型是int*
    //ppa就是一个二级指针变量
    
    //*ppa = pa
    //*pa = a
    //**ppa = a

    return 0;
}




 //指针数组

int main()
{
    int arr[10];//整型数组
    char ch[5];//字符数组

    //存放指针的数组 - 指针数组
    int* parr[10];//整型指针数组
    char* pch[5];//字符指针数组

    return 0;
}






