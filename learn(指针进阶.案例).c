#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	//ptr[-1] = *(ptr-1) 
//	//���ߵȼ�
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	//2 5
//	return 0;
//}




//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O��N����

int find_num(int arr[3][3], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;

	while (x < *px && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if(arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	//ʱ�临�Ӷ�O(N)���������±�������
	
	//0(1):�����Ĵ���Ϊ�����������ݵ����޹�


	//����һ������

	////�����ķ���������
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		if (arr[i][j] == 7)
	//		{

	//		}
	//	}
	//}

	int k = 7;
	//����ҵ�������1���Ҳ�������0
	int x = 3;
	int y = 3;
	int ret = find_num(arr, &x, &y, k);
	//&x &y �������ã�1.������� 2.����ֵ
	if (ret == 1)
	{
		printf("�ҵ���");
		printf("�±���:%d %d", x, y);
	}
	else
	{
		printf("�Ҳ���");
	}
	return 0;
}







#include <assert.h>

//�ַ�������
//ʵ��һ�����������������ַ����е�k���ַ�
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//void string_rotate(char* str, int k)
//{
//	assert(str);
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str;
//		//2.�Ѻ�ߵ�n-1���ַ��Ӻ���ǰŲ
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3.tmp�������
//		*(str + n - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_rotate(arr,k);
//	printf("%s\n", arr);
//	return 0;
//}











//дһ���������ж�һ���ַ����Ƿ�Ϊ��һ���ַ�����ת֮����ַ���


//int is_string_rotate(char* str1, char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str1;
//		//2.�Ѻ�ߵ�n-1���ַ��Ӻ���ǰŲ
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//3.tmp�������
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}







int is_string_rotate(char* str1, char* str2)
{
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	//1.str1�ַ�������׷��һ��str
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, 5);
	//2.�ж�str2�Ƿ�Ϊstr1���Ӵ�
	char* ret = strstr(str1, str1);

	return ret != NULL;
	
	//AABCDAABCD
	//BCDAA
}


int main()
{
	char arr1[] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}





////strcat ��strncat
//int main()
//{
//	char arr[20] = "hello";
//	//strcat(arr, "bit");//�⺯��strcat����arr��׷���ַ���������׷���Լ�
//	strncat(arr, arr,5);
//	printf("%s\n", arr);
//	return 0;
//}