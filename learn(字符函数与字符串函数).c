#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>


//

//�������汾
//�ݹ�汾
//ָ�� - ָ��

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
//	int len = strlen(arr);//strlen�󳤶Ȳ���\0
//	printf("%d\n", len);
//
//	char arr1[] = { 'a','b','c' };
//	//��\0��ֹͣ���������ֵ
//	int len = strlen(arr1);
//	int len = my_strlen(arr1);
//	printf("%d\n", len);
//	
//	//�������汾
//	int len = my_strlen(arr);
//
//	return 0;
//}



//strlen

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	//strlen����unsigned int �޷�����
//	//���뱻����Ϊԭ��
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
//	////�ַ�������
//	//printf("%s\n", arr);
//
//	char arr2[] = { 'a','b','c' };
//	strcpy(arr, arr2);
//	//ԭ�ַ���������\0���
//	//Ŀ��ռ�����㹻��
//	//Ŀ��ռ������޸ģ������ǳ����ַ���
//	printf("%s\n", arr);
//	return 0;
//}




//strcat
//�ַ���׷��

//char* my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1.�ҳ��ַ����е�\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.�ַ���׷�ӣ�����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "hello ";
//
//	//strcat(arr1,"world");//�ַ���׷�ӣ����ӣ�
//	////Ŀ��ռ��㹻��
//	////ԭ�ַ���������\0
//	////Ŀ��ռ������޸�
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
//	//�޷�ʵ�֣��Լ����Լ���
//	//strncat����ʵ��
//	printf("%s\n", arr);
//	return 0;
//}


//strcmp
//�ַ����Ƚϣ���������(<0 =0 >0)

//int main()
//{
//	char* p = "obc";
//	char* q = "abcdef";
//	int ret = strcmp("abbb", "abc");//�Ƚ϶�Ӧλ�õ�ASCII��ֵ
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
//���������Ƶ�strcpy

//int main()
//{
//	char arr1[20] = "abcdef";
//	char arr2[] = "qwer";
//	strncpy(arr1, arr2, 2);
//	//����һ������������˵������������
//	//����������\0����
//	printf("%s\n", arr1);
//
//	return 0;
//}



//strncat
//���������Ƶ�strcat

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//strncmp
//���������Ƶ�strcmp

//int main()
//{
//	char* p = "abcdef";
//	char* q = "abcqwert";
//	int ret = strncmp(p, q,3);
//	printf("%d\n", ret);
//	return 0;
//}




//strstr
//�ַ��������Ӵ�
//����ʱ���ص�һ�γ��ֵĵ�ַ
//�����ַ��ؿ�ָ��NULL

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
//	//��arr1�в����Ƿ����arr2����
//	char* ret = strstr(arr1, arr2);
//	char* ret = my_strstr(arr1, arr2);
//	if (ret = NULL)
//	{
//		printf("û�ҵ�\n");
//	}
//	else
//	{
//		printf("�ҵ���:%s\n", ret);
//	}
//	return 0;
//}


//strtok
//�и��ַ���

//char* strtok(char*str,const char* sep)
//sep������һ���ַ������������������ָ������ַ�����

//int main()
//{
//	char arr[] = "994753136@qq.com";
//	char* p = "@.";
//	strtok(arr, p);
//	//ֻ�ܷ���һ���ָ���
//	//���ָ�����'\0'ȡ�������ر��ָ����Ǵ��ַ�����Ԫ�ص�ַ
//	//����¼'\0'��λ�ã���һ�ε���strtokʱ�Ӵ˴���ʼ
//	
//	//���鴴����ʱ�������������ַ���
//
//
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//
//	//��һ�ε���Ϊstr(tmp,p)
//	//֮�����Ϊstr(NULL,p)
//
//	char* ret = NULL;
//
//	/*ret = strtok(tmp, p);
//	printf("%s\n", ret);*/
//
//	for (ret = strtok(tmp, p); ret != NULL;ret = strtok(NULL,p))
//	//��һ��Ϊstrtok(tmp,p) ֮��Ϊstrtok(NULL,p) ��������forѭ��
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//strerror
//���ش���������Ӧ�Ĵ�����Ϣ
//���ÿ⺯��ʧ�ܵ�ʱ�򣬶������ô�����

//int errno;
//ȫ�ֵĴ�����
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


























































