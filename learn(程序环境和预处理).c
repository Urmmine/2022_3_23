#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//���򻷾�
//���뻷��(������)+���л���



//Ԥ����




//Ԥ�������

//int main()
//{
//	//��־��Ϣ
//	printf("%s\n", __FILE__);//��ǰ�ļ���ַ
//	printf("%d\n", __LINE__);//�к�
//	printf("%s\n", __DATE__);//����
//	printf("%s\n", __TIME__);//ʱ��
//	printf("%s\n", __FUNCTION__);
//
//	int i = 0;
//	FILE* pf = fopen("log.txt", "a+");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %d %s %d %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//
//	//printf("%d\n", __STDC__);
//	////VS2019 ��֧��ANSI C
//	return 0;
//}



//#define �������

#define M 1000

#define reg register
//Ϊregister����ؼ��ִ���һ����̵�����


//int main()
//{
//	register int num = 0;
//	int m = M;
//	printf("%d\n", m);
//	return 0;
//}

#define do_forever for(;;)
//�ø�����ķ�ʽ��ʾ��ѭ��

#define CASE break;case

//int main()
//{
//	int n = 0;
//
//	switch (n)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}


//define �����
	
//�Ѳ����滻���ı���

#define SQUARE(x) x*x

#define DOUBLE(x) (x)+(x)

//int main()
//{
//	printf("%d\n", SQUARE(3));
//
//	printf("%d\n", SQUARE(3+1));//3+1*3+1
//	//���������м���ֱ���滻
//	
//	//��Ϊ#defire SQUARE(x) (x)*(x)
//	
//	printf("%d\n",10 * DOUBLE(4));//10*4+4
//	//��Ϊ#define DOUBLE(x) ((x)+(x))
//
//	return 0;
//}

//���ú�ʱ �ȿ��Ƿ���define���������������滻 ���滻��
//���ں� ���ܳ��ֵݹ�









//#��##���ں���ʹ�ã�
//�Ѳ������뵽�ַ�����

#define PRINT(X) printf("the value of "#X" is %d\n",X)

#define PRINT1(X,FORMAT) printf("the value of "#X" is "FORMAT"\n",X)

//#X��ΪX�������ַ�����ʽ
//#X ��Ϊ "X"

//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	int a = 10;
//	//the value of a is 10
//	PRINT(a);
//	int b = 20;
//	PRINT(b);
//	//the value of b is 20
//	int c = 30;
//	PRINT(c);
//	//the value of c is 10
//	float d = 5.5f;
//	PRINT1(d,"%f");
//	return 0;
//}




#define CAT(X,Y) X##Y
//##����������������һ��

//int main()
//{
//	int class101 = 100;
//	printf("%d\n", CAT(class, 101));
//	return 0;
//}



//�������õĺ����

//������ʹ�ô������õı��ʽ

#define MAX(X,Y) ((X)>(Y)?(X):(Y))



//int main()
//{
//	int a = 5;
//	int b = 8;
//	int m = MAX(a++, b++);
//	printf("m = %d\n", m);
//	return 0;
//}





//��ͺ����ĶԱ�

//�ŵ㣺
//1.��Ⱥ��������ٶȿ�
//2.���������޹ص�

//ȱ�㣺
//1.��ϳ�ʱ�����ӳ��򳤶�
//2.����û�����Ե�
//3.�����������޹أ�Ҳ�����Ͻ��������޹أ�
//4.��������ȼ�������



#define MALLOC(num,type) (type*)malloc(num*sizeof(type))

//int main()
//{	
//	//malloc(10, *sizeof(int));
//	//malloc(10, int);
//	int *p = MALLOC(10, int);
//	return 0;
//}



//�߼����ú� �߼������ú���


//����ȫ����д
//��������Ҫȫ����д



//#undef

//int main()
//{
//	int a = M;
//#undef M
//	printf("%d\n", M);
//	return 0;
//}




//�����ж���




//��������

//�ж��Ƿ񱻶���



//int main()
//{
//#ifdef PRINT
////#if define(PRINT)
//	printf("hehe\n");
//#endif 
//	return 0;
//}


//int main()
//{
//
//#ifndef HEHE
////#if !define (HEHE)
//	printf("hehe\n");
//#endif
//
//	return 0;
//}






//#if �� #endif

#if 0


int main()
{
#if 1
	printf("hehe\n");
#endif
	return 0;
}

#endif



//�������ʽ

//int main()
//{
//#if 1 == 1
//	printf("hehe\n");
//#elif 1==2
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//	return 0;
//}





//ͷ�ļ��İ���


//���ļ��İ���<>
#include <stdlib.h>

//�����ļ��İ���""
#include "head.h"

#include "math.h"

//����Դ�ļ���Ŀ¼���ң��Ҳ������ڿ⺯����ͷ�ļ�Ŀ¼�²���

//���������ǲ��ҵĲ��Ե�����


#pragma once
//��ֹͷ�ļ�����ΰ���