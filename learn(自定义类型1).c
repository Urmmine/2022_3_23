#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�ṹ�� ����һ��������
//�������Ӷ���

//�ṹ������

//struct Book
//{
//	char name[20];
//	int price;
//	char id[12];
//}b4,b5,b6;//ֱ�Ӵ�������������ȫ�ֵ�
//int main()
//{
//	struct Book b1;
//	struct Book b2;
//	struct Book b3;
//	//b1,b2,b3�Ǿֲ�����
//
//	return 0;
//}


//����ȫ����
//�����ṹ������

//struct
//{
//	char c;
//	int i;
//	char ch;
//	double d;
//}a;

//ֻ����һ��




//�ṹ���������

//struct A
//{
//	int i;
//	char c;
//};
//
//struct B
//{
//	char c;
//	struct A sa;
//	double b;
//};


//struct N
//{
//	int i;
//	struct N a;
//};


//������
//�����ṹ���ָ��

//struct Node
//{
//	int data;
//	struct Node* next;
//};



//�ṹ������Ķ���ͳ�ʼ��

//struct S
//{
//	char c;
//	int i;
//}s1,s2;
//
//struct	B
//{
//	double d;
//	struct S s;
//	char c;
//};
//
//int main()
//{
//	struct S s3 = { 'x',20};
//	struct B sb = { 3.14,{'w',100},'q' };
//	printf("%lf %c %d %c\n", sb.d, sb.s.c, sb.s.i, sb.c);
//
//	return 0;
//}




//�ṹ��Ĵ�С

//�ṹ����ڴ���������

//struct S
//{
//	char c1;
//	int i;
//	double d;
//};
//
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));//16
//	
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//12
//	return 0;
//}

//�ṹ��Ķ������
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��

//������ =  ������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ
//VSĬ�϶�������8

//�ṹ��Ĵ�СΪ����������������

//Ƕ�׵Ľṹ����뵽�Լ���������������������
//�ṹ��������С�������г�Ա��������������Ƕ�׽ṹ��Ķ���������������


//�����ڴ�����ԭ��
//1.ƽ̨ԭ�򣺲�������Ӳ��ƽ̨���ܷ��������ַ�ϵ���������
//2.����ԭ��δ������ڴ�Ҫ�������Σ�������ڴ�ֻ��Ҫ����һ�Σ����Ч��

//�ڴ�������ÿռ任ȡʱ�������


//��ƽṹ���ʱ���ÿռ�С�ĳ�Ա������һ���ʡ�ռ�



//�޸�Ĭ�϶�����

//��Ĭ�϶�������Ϊ2

//#pragma pack(2)
//
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//8
//	return 0;
//}

#include <stddef.h>

//�ú�stddef����ƫ����

struct s
{
	char c1;
	int i;
	char c2;
};

int main()
{
	printf("%d\n", offsetof(struct s, c1));
	printf("%d\n", offsetof(struct s,c1));
	return 0;
}

















































