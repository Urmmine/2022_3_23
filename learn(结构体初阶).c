#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�ṹ�����



//�ṹ������

//struct Stu
//{	
//	//�ṹ��ĳ�Ա����
//	char name[20];
//	int age;
//	char id[20];
//};


//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1,s2��ȫ�ֱ���


//����

//int main()
//{
//	struct Stu s;//����
//	//s�����͵Ķ���
//	return 0;
//}



//�ṹ���Ա���������飬���֣�ָ�룬Ҳ�����ǽṹ��


//�ṹ��ĳ�ʼ��

struct B
{
	char c;
	short s;
	double d;
};


struct Stu
{
	struct B sb;
	char name[20];
	int age;
	char id[20];
};


//int main()
//{
//	struct Stu s = { {'w',20,3.14},"����",30,"20220324" };
//	//�ṹ���Ա�ķ���
//	//. ->   (->��ָ�����)
//
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//
//	return 0;
//}


//�ṹ�崫��

void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}
void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
int main()
{
	struct Stu s = { {'w',20,3.14},"����",30,"20220324" };

	//дһ��������ӡs������
	print1(s);//��ֵ����
	print2(&s);//��ַ����
	//�����⿪�ٿռ䣬ֻ���ݵ�ַ�Ŀռ䣬Ч�ʸߣ���ͨ���βθı�ʵ��

	return 0;
}



//�������õĲ���ѹջ


//�Ƚ��ĺ����������ȳ�
//��ջ�д�����ݣ�ѹջ

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	int c = Add(a,b);
	return 0;
}


//ÿһ�������ĵ��ö������ڴ��ջ���Ͽ���һ��ռ�



