#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//һ��ָ�봫��

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



//����ָ�봫��

//void test(int** p2)
//{
//	**p2 = 20;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ��
//	int** ppa = &pa;//ppa�Ƕ���ָ��
//	//����ָ����д���
//	test(ppa);
//	printf("%d\n", a);
//
//
//	/*int* arr[10] = { 0 };
//	test(arr);*/
//	//�����β�Ϊ����ָ��ʱ�����Դ�����һ��ָ������飬��������������Ԫ�صĵ�ַ
//	return 0;
//}



//����ָ��
//��ź�����ַ��ָ��

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
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ�� - ��ŵ�������ĵ�ַ - ����ָ��
//
//	//����ָ�� - ��ź�����ַ��ָ��
//	printf("%p\n",&Add);
//	//������ ��= &������
//	//������ == &������
//
//	//pf - ����ָ�����
//	int (*pf)(int,int) = &Add;//Add == pf
//	int (*pf)(int, int) = Add;
//
//	int ret = (*pf)(3, 5);//�Ƚ�ָ��pf�����ã����������
//
//	int ret = Add(3, 5);
//	int ret = pf(3, 5);
//
//
//	//Add == pf
//	int ret = (*pf)(3, 5);//*û������
//	int ret = pf(3, 5);
//	//�ȼ�
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
//	//����0��ַ���ĺ���
//	//�ú����޲�
//	//1.void��*������ - ����ָ������
//	//2.��void��*��������0 - ��0����ǿ������ת����������Ϊһ��������ַ
//	//3.*��void��*��������0 - ��0��ַ���н����ò���
//	//4.��*��void��*��������0 ������ - ����0��ַ���ĺ���
//
//	return 0;
//}




//void (* signal(int, void(*)(int)))(int);
////signal�Ǻ�����
////1.signal�����ĵ�һ������������int���ڶ��������������Ǻ���ָ��
////�ú���ָ�룬ָ��һ������Ϊint����������Ϊvoid�ĺ���
////2.signal�����ķ�������Ҳ��һ������ָ��
////�ú���ָ�룬ָ��һ������Ϊint����������Ϊvoid�ĺ���
////signal��һ����������
//
//
//typedef void(*pfun_t)(int);
////��void(*)(int)�ĺ���ָ������������Ϊpfun_t
//
//
//pfun_t siganl(int, pfun_t);
//void (*signal(int, void(*)(int)))(int);
////�ȼ�







//����ָ������ - ��ź���ָ�������

//����ָ�� int*
//����ָ������ int* arr[5];

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
//	int(*pfArr[2])(int, int) = { Add, Sub };//����ָ������
//
//	return 0;
//}



//Ӧ��

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
//		//������ - �������ͱ����ļӼ��˳�
//	do {
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		//pfArr����ָ�����飬���±��Һ���
//		//ת�Ʊ�
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//			//����ָ�������Ϊ���Ԫ�أ���Ӧ�±�
//			printf("������2����������>");
//			scanf("%d %d", &x, &y);
//			ret = (pfArr[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		} while (input);
//	return 0;
//}




//ָ����ָ�������ָ��
//ȡ��ָ����ָ������ĵ�ַ


//int main()
//{
//	int (*p)(int, int);//����ָ��
//	int(*p2[4])(int, int);//p2�Ǻ���ָ�������
//	int(*  (*p3)[4]  )(int, int) = &p2;//ȡ�����Ǻ���ָ������ĵ�ַ
//	//p3��һ��ָ����ָ�������ָ��
//	return 0;
//}





//�ص�����
//��B��������A������ָ��Ϊ������A���е���


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

////qsort������ģ��ʵ��
////��������
//
////void qsort(void* base,//base�д�ŵ��Ǵ����������е�һ������ĵ�ַ
////	size_t num,//Ԫ�ظ���
////	size_t size,//һ��Ԫ�صĴ�С����λ���ֽ�
////	int (*cmp)(const void*, const void*));//�Ƚϴ�С�ĺ����ĵ�ַ�����ڲ�ͬ��������ѡ��ͬ�ĺ���,��ʹ����ѡȡ
//
//////ͳһ���ع���(>0 =0 <0)
//
////��ӡ����
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
////�������ݵ�����
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
////�ṹ�����ݵ�����
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
//	//����
//}
//
//void test2()
//{
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",30} };
//	//����������
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), sort_by_age);
//	//����������
//	qsort(s, sz, sizeof(s[0]), sort_by_name);
//}





//ģ��qsortʵ��ð�������ͨ���㷨

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
	//����
	for (i = 0; i < sz - 1; i++)
	{
		//һ�˵�����
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			if (cmp( (char*)base+j*width , (char*)base+(j+1)*width ) > 0)//ǿ������ת��
				//char* �ǵ�λָ�� - 1�ֽ�
			{
				//����
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


//������

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}


//qsort�����ĺ��������β��еĺ���ָ���ú����ܹ�ʵ�ֻص��������Բ�ͬ���͵����ݽ�������















