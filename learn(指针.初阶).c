#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//ָ��

//int main()
//{
//	int a = 10;//aռ4���ֽ�
//	int* pa = &a;//�õ�����a��4���ֽڵ��е�һ���ֽڵĵ�ַ
//	*pa = 20;//*pa����a
//	//pa ָ�����
//
//	return 0;
//}


//ָ�����͵�����

//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Ԫ��������


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));//4
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pf));//4
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//	//ֻ��һ�ֽڵ�Ȩ��
//
//	int* pa = &a;
//	*pa = 0;
//	//���ĸ��ֽڵ�Ȩ��
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p+1);//��4���ֽ�
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//��һ���ֽ�
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	//char* p = arr;
//	//һ���ֽ�һ���ֽڷ���
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//+iʱ+�����ֽ�ȡ����p��ָ������
//	}
//	return 0;
//}




//Ұָ��


//1.ָ��δ��ʼ��

//int main()
//{
//	int* p;//p��һ���ֲ���ָ�����������ʼ��ʱΪĬ��ֵ
//	*p = 20;//�Ƿ������ڴ�
//
//	return 0;
//}



//2.ָ��Խ�����

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}


//3.ָ��ָ��Ŀռ��ͷ�

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	//����test��return &a��a������
//	*p = 20;
//	//�ٶ�a����������
//	return 0;
//}


//��ι��Ұָ��

//1.ָ��Ҫ��ʼ��

//int main()
//{
//	//��֪��pӦ�ó�ʼ��Ϊʲô��ַʱ����ʼ��Ϊ��ָ��
//	int* p = NULL;
//	return 0;
//}

//int main()
//{
//	//��ȷ֪����ʼ����ֵ
//	int a = 10;
//	int* ptr = &a;
//	return 0;
//}



//2.С��ָ��Խ��
//C���Ա����������ݵ�Խ����Ϊ

//3.ָ��ָ��ռ��ͷ�ʱ��ʱ��NULL

//4.ָ��ʹ��֮ǰ������Ч�Եļ��(�ж�)

//int main()
//{
//	int a = 0;
//	int* p = &a;
//	if (p != NULL)
//	{
//		*p = 10;
//	}
//	return 0;
//}



//ָ������
//1.ָ��+-����
//2.ָ��-ָ��
//3.ָ��Ĺ�ϵ����(�Ƚϴ�С)


//ָ��+-���� �� ָ��Ĺ�ϵ����

//int main()
//{
//	int arr[10] = { 1,2,34,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//
//	while (p <= pend)//ָ��Ĺ�ϵ����
//	{
//		printf("%d\n", *p);
//		p++;//ָ��+-����
//	}
//	return 0;
//}




//ָ��-ָ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	//ָ��-ָ��õ���������ָ��֮���Ԫ�ظ���
//	//ǰ��������ָ��ָ��ͬһ��ռ�
//	return 0;
//}


//�����ڼ���Ԫ�ظ���

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen("abc");//�ַ������δ�����a�ĵ�ַ
//	printf("%d\n", len);
//	//֪��a��\0�ĵ�ַ�Ϳ������ַ�������
//	return 0;
//}



//ָ��Ĺ�ϵ����

#define N_VALUES 5

int main()
{
    int values[10] = { 0 };
    int* vp = 0;
    for (vp = &values[N_VALUES]; vp > &values[0];)
    {
        *--vp = 0;
    }
}


//������������´���
//�������ַ��ǰԽ��

int main()
{
    int values[10] = { 0 };
    int* vp = 0;
    for (vp = &values[N_VALUES]; vp > &values[0];vp--)
    {
        *vp = 0;
    }
}



//ָ�������

//int main()
//{
//    int arr[10] = { 0 };
//    printf("%p\n", arr);//��������������Ԫ�صĵ�ַ
//    printf("%p\n", &arr[0]);
//    int* p = arr;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%p <==> %p\n",& arr[i], p + i);
//        //p + i�����ľ����±�Ϊi�ĵ�ַ
//    }
//    return 0;
//}



//ָ��p�����������ǵ�ַ

int main()
{
    int arr[10] = { 1,2,3,4,5 };
    int* p = arr;
    //p[2] = *(p+2) = arr[2] = *(2+p) = *(2+arr) = 2[arr]
    printf("%d\n", arr[2]);
    printf("%d\n", 2[arr]);
    printf("%d\n", p[2]);

    return 0;
}

    
//����ָ��

int main()
{
    int a = 10;
    int* pa = &a;//pa��ָ�������һ��ָ��

    pa;//paҲ�Ǹ�����,&paȡ��pa���ڴ��е���ʼ��ַ
    int **ppa = &pa;//pa��������int*
    //ppa����һ������ָ�����
    
    //*ppa = pa
    //*pa = a
    //**ppa = a

    return 0;
}




 //ָ������

int main()
{
    int arr[10];//��������
    char ch[5];//�ַ�����

    //���ָ������� - ָ������
    int* parr[10];//����ָ������
    char* pch[5];//�ַ�ָ������

    return 0;
}






