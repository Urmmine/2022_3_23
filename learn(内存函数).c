#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <errno.h>



//perror		
//��ӡ������Ϣ

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



//�ַ����ຯ��
#include <ctype.h>
//�հ��ַ�


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

	

//�ַ�ת������

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




//�ڴ��������

//memcpy - �ڴ濽��
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
//	//memcpy(arr2,arr1,20);//��aar1����ǰ20���ֽڵ�arr2
//	//memcpy(arr1+2,arr1,20);
//	//���ܿ����ص��Ĳ���
//	
//	my_memcpy(arr2, arr1, 20);
//
//	return 0;
//}

 



//�ڴ濽��
//memmove
//�ɿ����ڴ��ص���λ��

//void* my_memmove(void* dest, void* src, size_t num)
////���԰�Դ���ݴ�ǰ��󿽱���Ҳ���ԴӺ���ǰ����
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		//��ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)dest + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
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




//�ڴ�Ƚ�
//memcmp
//int memcmp(const void* ptr1,const void* ptr2,size_t num)

//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,3.0 };
//	int ret = memcmp(arr1, arr2, 4);
//	printf("%d\n", ret);
//	//memcmp - strcmp
//	//��ȷ���0��arr1����arr2���ش���0�����֣�aar1С��arr2����С��0������
//
//	return 0;
//}





//�ڴ�����
//memset
//void* memset(void* ptr,int value,size_t num)
//��ǰnum�ֽڸ���ֵ���ó�value

int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 20);//���ֽ�Ϊ��λ�����ڴ�
	return 0;
}































