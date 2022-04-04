#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <errno.h>



//perror		
//打印错误信息

//int main()
//{
//	FILE* pf = fopen("test,txt", "r");
//	//0    "no error"
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(error));
//		perror("fopen");
//		return 1;
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//字符分类函数
#include <ctype.h>
//空白字符


//int main()
//{
//	/*char ch = "#";
//	int ret = isdigit(ch);
//	printf("%d\n", ret);*/
//
//
//	char ch = "A";
//	int ret = islower(ch);
//	printf("%d\n", ret);
//	return 0;
//}

	

//字符转换函数

//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//			printf("%c ", arr[i]);
//		}
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}




//内存操作函数

//memcpy - 内存拷贝
#include <assert.h>

//void* my_memcpy(void* dest,void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//
//	//memcpy(arr2,arr1,20);//从aar1拷贝前20个字节到arr2
//	//memcpy(arr1+2,arr1,20);
//	//不能拷贝重叠的部分
//	
//	my_memcpy(arr2, arr1, 20);
//
//	return 0;
//}

 



//内存拷贝
//memmove
//可拷贝内存重叠的位置

//void* my_memmove(void* dest, void* src, size_t num)
////可以把源数据从前向后拷贝，也可以从后向前拷贝
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)dest + 1;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(arr1 + 2, arr1, 20);
//
//	return 0;
//}




//内存比较
//memcmp
//int memcmp(const void* ptr1,const void* ptr2,size_t num)

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	//memcmp - strcmp
//	//相等返回0，arr1大于arr2返回大于0的数字，aar1小于arr2返回小于0的数字
//
//	return 0;
//}





//内存设置
//memset
//void* memset(void* ptr,int value,size_t num)
//将前num字节个数值设置成value

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//以字节为单位设置内存
	return 0;
}































