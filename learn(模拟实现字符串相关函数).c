#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <assert.h>

//strcpy的模拟
//字符串拷贝


//优化

//1.

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; 
//}

//2.

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//3.逗号表达式

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//既拷贝了'\0'又使得循环停止
//	{
//		;
//	}
//}


//4.传递数组为空指针时(使用断言)

//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);//断言：为真不报错，为假报错
//	while (*dest++ = *src++)//既拷贝了'\0'又使得循环停止
//	{
//		;
//	}
//} 


//5.使用const

//const
//常变量化，常量在左边无法赋值
//函数在作用是将src复制到dest

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言：为真不报错，为假报错
//	while (*dest++ = *src++)//既拷贝了'\0'又使得循环停止
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//const修饰指针

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	int n = 100;
//	//const 放在*的左边，修饰的是*p，表示指针指向的内容不能通过指针来改变
//	*p = 20;
//
//	p = &n;
//	//但是指针变量本身是可以修改的
//
//	int* const p = &num;
//	//const 放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
//	//但是指针指向的内容可以被改变
//
//	return 0;
//}


//6.返回值为char*

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言：为真不报错，为假报错
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//既拷贝了'\0'又使得循环停止
//	{
//		;
//	}
//	return ret;//返回目标空间的地址
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问
//	return 0;
//}



//计算字符串长度

size_t my_strlen(const char* str)//size_t = unsigned int 
{
	assert(str != NULL);
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = {"abc"};
	int len = my_strlen(arr);
	printf("%d\n", len);

}

