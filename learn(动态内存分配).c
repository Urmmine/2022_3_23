#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//��̬�ڴ����
//malloc calloc free realloc
//�ڶ����Ͽ���



//��̬�ڴ濪��

//��̬�ڴ溯��
//malloc
//void* calloc(size_t size)

//int main()
//{
//	//���迪��10��int�Ŀռ�
//	int arr[10] = { 0 };
//
//	//��̬�ڴ濪�ٵķ���
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	//ʹ����Щ�ռ��ʱ��
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
//	//���տռ�
//	free(p);
//	//freeֻ���ͷŶ��Ͽ��ٵĿռ�
//	
//	p = NULL;//�ÿձ���Ƿ�����
//	
//
//	return 0;
//}



//calloc
//void* calloc(size_t num,size_t size)
//calloc�ɶ��ڴ��ʼ������ʼ��Ϊ0

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
//�ö�̬�ڴ����������

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
//	//������Ҫpָ��Ŀռ������Ҫ20��int�Ŀռ�
//	//realloc�����ռ�
//	int* ptr = (int*)realloc(p, 20 * sizeof(int));
//	//����ռ��㹻ʱ���ص�ǰ��ַ
//	//����ռ䲻��ʱ�����ҿռ䲢��ԭ���ݿ�����ȥ�������¿ռ�ĵ�ַ
//	//�Ҳ������ʵĿռ������Сʱ���ؿ�ָ��
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
//	int* p = (int*)realloc(NULL, 40);//����������malloc������ֱ���ڶ�������40���ֽ�
//	free(p);
//	p = NULL;
//	return 0;
//}





//��̬�ڴ濪�ٳ�������

//1.��NULLָ��Ľ����ò���

//int main()
//{
//	int* p = (int*)malloc(1000000000000000);
//	//��malloc�����ķ���ֵ���пմ���
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	return 0;
//}


//2.�Զ�̬���ٿռ��Խ�����

//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	//Խ�����
//	for (i = 0; i < 40; i++)
//	{
//		*(p + i) = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}



//3.ʹ��free�ͷŷǶ�̬���ٵĿռ�

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//ʹ��
//
//	free(p);//ʹ��free�ͷŷǶ�̬���ٵĿռ�
//	p = NULL;
//
//	return 0;
//}


//4.ʹ��free�ͷŶ�̬�ڴ��е�һ����

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
//	free(p);//��Ҫ����ʼλ���ͷ�
//	p == NULL;
//	return 0;
//}




//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�

//int main()
//{
//	int* p = (int*)malloc(100);
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//6.��̬���ٵĿռ������ͷţ��ڴ�й¶��

//���ֻ��շ�ʽ
//1.��������free
//2.�������

//void test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return;
//	}
//	//ʹ��
//}
//int main()
//{
//	test();
//	//...
//	return 0;
//}






//�ڴ�ֲ�

//int* test()
//{
//	int x = 10;
//	//�ֲ�������ջ���Ͽ��ٿռ䣬���ֲ�������
//	//����&x�Ƿ������ڴ�
//
//	//ʹ��malloc�ڶ��Ͽ��ٿռ�ɱ���
//	return (&x);
//}
//int main()
//{
//	int* x = test();
//	//
//	return 0;
//}





//��������

//C99�ṹ�����һ��Ԫ��������δ֪��С�����飬������������

//1.��������ǰ������һ����Ա
//2.sizeof���صĽṹ��С����������������ڴ�
//3.�������������Ա�Ľṹ��malloc�������������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С

//��ʽ

struct S
{
	int n;
	int arr[];//��С��δ֪��
	//arr����������
};

//struct S
//{
//	int n;
//	int arr[0];
//};


//�����С

int main()
{
	//struct S s = { 0 };

	//����arr�Ĵ�С��10������
	struct S* ps = malloc(sizeof(struct S)+(10*sizeof(int));
	ps->n = 10;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	//����
	struct S* ptr = (struct S*)relloc(ps, sizeof(struct S) + 20 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
	}
	//�ͷ�
	free(ptr);
	ptr = NULL;
	//printf("%d\n", sizeof(s));
	return 0;
}

//�ô�
//1.�����ڴ��ͷ�
//2.�����ڷ����ٶ�





































