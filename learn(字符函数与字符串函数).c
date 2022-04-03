#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//

//计数器版本
//递归版本
//指针 - 指针

//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//
//	int len = strlen(arr);//strlen求长度不算\0
//	printf("%d\n", len);
//
//	char arr1[] = { 'a','b','c' };
//	//无\0不停止，返回随机值
//	int len = strlen(arr1);
//	int len = my_strlen(arr1);
//	printf("%d\n", len);
//	
//	//计数器版本
//	int len = my_strlen(arr);
//
//	return 0;
//}



//strlen

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	//strlen返回unsigned int 无符号数
//	//补码被解析为原码
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//}



//strcpy

//int main()
//{
//	char arr[20] = { 0 };
//	//arr = "hello";//err
//
//	//strcpy(arr,"hello");
//	////字符串拷贝
//	//printf("%s\n", arr);
//
//	char arr2[] = { 'a','b','c' };
//	strcpy(arr, arr2);
//	//原字符串必须有\0结果
//	//目标空间必须足够大
//	//目标空间必须可修改，不能是常量字符串
//	printf("%s\n", arr);
//	return 0;
//}




//strcat
//字符串追加

//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.找出字符串中的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.字符串追加，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "hello ";
//
//	//strcat(arr1,"world");//字符串追加（连接）
//	////目标空间足够大
//	////原字符串必须有\0
//	////目标空间必须可修改
//	//printf("%s\n", arr1);
//  
//
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//
//
//	return 0;
//}

//int main()
//{
//	char arr[20] = "abcd";
//	strcat(arr, arr);
//	//无法实现，自己踩自己脚
//	//strncat可以实现
//	printf("%s\n", arr);
//	return 0;
//}


//strcmp
//字符串比较，返回整型(<0 =0 >0)

//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	int ret = strcmp("abbb", "abc");//比较对应位置的ASCII码值
//	printf("%d\n", ret);
//
//
//	return 0;
//}


//int my_strcmp(const char* s1,const char* s2)
//{
//	assert(s1 && s2);
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	char* p = "abcdef";
//	char* q = "abbb";
//	int ret = strcmp(p, q);
//  int ret = my_strcmp(p,q);
//	if (ret > 0)
//	{
//		printf("p > q\n");
//	}
//	else if(ret < 0)
//	{
//		printf("p < q\n");
//	}
//	else
//	{
//		printf("p = q\n");
//	}
//
//	my_strcmp(p, q);
//
//	return 0;
//}





//strncpy
//长度受限制的strcpy

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//	//多了一个参数，用于说明拷贝的数量
//	//数量不足用\0代替
//	printf("%s\n", arr1);
//
//	return 0;
//}



//strncat
//长度受限制的strcat

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//strncmp
//长度受限制的strcmp

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	int ret = strncmp(p, q,3);
//	printf("%d\n", ret);
//	return 0;
//}




//strstr
//字符串中找子串
//出现时返回第一次出现的地址
//不出现返回空指针NULL

//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "bcd";
//	//在arr1中查找是否包含arr2数组
//	char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret = NULL)
//	{
//		printf("没找到\n");
//	}
//	else
//	{
//		printf("找到了:%s\n", ret);
//	}
//	return 0;
//}


//strtok
//切割字符串

//char* strtok(char*str,const char* sep)
//sep参数是一个字符串，定义了用于作分隔符的字符集合

//int main()
//{
//	char arr[] = "994753136@qq.com";
//	char* p = "@.";
//	strtok(arr, p);
//	//只能返回一个分隔串
//	//将分隔符由'\0'取代并返回被分隔的那串字符的首元素地址
//	//并记录'\0'的位置，下一次调用strtok时从此处开始
//	
//	//建议创建临时变量保留完整字符串
//
//
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//
//	//第一次调用为str(tmp,p)
//	//之后调用为str(NULL,p)
//
//	char* ret = NULL;
//
//	/*ret = strtok(tmp, p);
//	printf("%s\n", ret);*/
//
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL,p))
//	//第一次为strtok(tmp,p) 之后都为strtok(NULL,p) 巧妙利用for循环
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strerror
//返回错误码所对应的错误信息
//调用库函数失败的时候，都会设置错误码

//int errno;
//全局的错误码
#include <errno.h>

//char* strerror(int errno);


int main()
{
	/*printf("%s\n", strerror(0));
	printf("%s\n", strerror(1));
	printf("%s\n", strerror(2));
	printf("%s\n", strerror(3));
	printf("%s\n", strerror(4));
	printf("%s\n", strerror(5));*/

	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	fclose(pf);
	pf = NULL;

	return 0;
}


























































