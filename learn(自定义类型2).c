#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//�ṹ�崫��

//struct S
//{
//	int data[1000];
//	int num;
//};
//
//struct S s = { {1,2,3,4},1000 };
//
//void print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
//void print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	print1(s);//���ṹ��
//	print2(&s);//���ṹ���ַ
//	//����ַЧ�ʸ���
//	return 0;
//}







//λ��
//�������Ϳռ��С����ʡ�ռ䣬�������������ڴ��Ĵ�С

//λ�εĳ�Ա��int��unsigned int��signed ��char����

//struct A
//{
//	//int���ȿ���4���ֽ� - 32bit
//	int _a:2;//_a��Առ2��bitλ
//	int _b:5;//_b��Առ5��bitλ
//	int _c:10;//_c��Առ10��bitλ
//	//����17bit�󲻹���30bit �ٿ���4�ֽ� - 32bit
//	int _d:30;//_D��Առ30��bitλ
//	//���ǲ������ó����������͵Ĵ�С
//};
//
////����ƽ̨��ע�ؿ���ֲ�ĳ���Ӧ����ʹ��λ��
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}

//bitλ�ӵ͵�ַ��ʼʹ�ã�������ʱ���¿����ֽ�λ




//ö������


//����ö������

//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//	//ö�ٳ���
//	//Ĭ��0123456
//	//����1
//	//�ɳ�ʼ��
//};

//int main()
//{
//	//CPP �﷨�������ϸ�
//	enum Color c = BLUE;
//
//	printf("%d\n", RED);//0
//	printf("%d\n", GREEN);//1
//	printf("%d\n", BLUE);//2
//	return 0;
//}


//ö�ٵ��ŵ�
//����ֵ�����Ӵ���ɶ���

//Ҳ����#define���壬���ǿ���������Ⱦ��define�������ȫ�ֵ���


//����д�˵���ѡ��

//void menu()
//{
//
//}
//
//enum Option
//{
//	EXIT,
//	ADD,
//	SUB,
//	MUL,
//	DIV
//};
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case ADD:
//			break;
//		case SUB:
//			break;
//		case MUL:
//			break;
//		case DIV:
//			break;
//		case EXIT:
//			break;
//		}
//	} while (input);
//	return 0;
//}







//���ϣ������壩
//��Ա����ͬһ���ڴ�ռ�

//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u = {10};//�ı��һ���ֽڵ�ֵ
//
//	u.i = 1000;
//	u.c = 100;
//	//������ֵ
//
//	printf("%d\n", sizeof(u));
//	//������Ĵ�С����������Ա�Ĵ�С
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	//���ߵ�ַ��ͬ
//
//	return 0;
//}








//�жϵ�ǰ������Ĵ�С��

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


//���������жϴ�С��

//int check_sys()
//{
//	union U
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//	//����1����С�ˣ�����0���Ǵ��
//}
//
//int main()
//{
//	check_sys();
//
//	return 0;
//}


//�������С�ļ���
//����������Ա�Ĵ�С
//������Ա�Ĵ�С��������������������ʱ����Ҫ���뵽������������������

union Un
{
	char a[5];
	int i;
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	return 0;
}










