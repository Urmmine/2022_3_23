#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <assert.h>

//strcpy��ģ��
//�ַ�������


//�Ż�

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

//3.���ű��ʽ

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)//�ȿ�����'\0'��ʹ��ѭ��ֹͣ
//	{
//		;
//	}
//}


//4.��������Ϊ��ָ��ʱ(ʹ�ö���)

//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);//���ԣ�Ϊ�治����Ϊ�ٱ���
//	while (*dest++ = *src++)//�ȿ�����'\0'��ʹ��ѭ��ֹͣ
//	{
//		;
//	}
//} 


//5.ʹ��const

//const
//��������������������޷���ֵ
//�����������ǽ�src���Ƶ�dest

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���ԣ�Ϊ�治����Ϊ�ٱ���
//	while (*dest++ = *src++)//�ȿ�����'\0'��ʹ��ѭ��ֹͣ
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


//const����ָ��

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	int n = 100;
//	//const ����*����ߣ����ε���*p����ʾָ��ָ������ݲ���ͨ��ָ�����ı�
//	*p = 20;
//
//	p = &n;
//	//����ָ����������ǿ����޸ĵ�
//
//	int* const p = &num;
//	//const ����*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı�
//	//����ָ��ָ������ݿ��Ա��ı�
//
//	return 0;
//}


//6.����ֵΪchar*

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���ԣ�Ϊ�治����Ϊ�ٱ���
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)//�ȿ�����'\0'��ʹ��ѭ��ֹͣ
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ�ĵ�ַ
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ����
//	return 0;
//}



//�����ַ�������

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

