#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�����ļ� 
//.c .exe .obj

//�����ļ�
//��������ʱ��д�����ݣ���������ݵ��ļ�

//�ļ���
//�ļ�·��+�ļ�������+�ļ���׺
//c:\code\test\.txt


//�ļ��Ĵ򿪺͹ر�

//�ļ�ָ��
//FILE���͵Ľṹ�����

//int main()
//{
//	FILE* pf;//�ļ�ָ�����ά���ļ���Ϣ��
//	//pfָ���ļ���Ϣ��
//
//	//FILE* pf = fopen("test.dat", "w");//���·��
//
//	FILE* pf = fopen("D:\\My Code(C)\\2022_4_9\\test.dat","w");//����·��
//	//"r" - ֻ�� - ������ʱ����
//	//"w" - ֻд - ���ٲ���մ� - ������ʱ�����ļ�
//	//"a" - ׷�� - �ļ�β������� - ������ʱ�����ļ�
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}


//�ļ���˳���д

//c���Գ���ֻҪ������������Ĭ�ϴ���3������
//stdin - ��׼������ - ����
//stdout - ��׼����� - ��Ļ
//stderr - ��׼������ - ��Ļ


//�ַ����뺯�� fgetc
//�ַ�������� fputc

//�ı������뺯�� fgets
//�ı������뺯�� fputs

//��ʽ�����뺯�� fscanf
//��ʽ��������� fprintf

//���������� fread
//��������� fwrite


//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//ֻ��

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ret = fgetc(pf);
//	printf("%c\n", ret); 
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//�ӱ�׼������stdin��ȡ��Ϣ

//int main()
//{
//	//���ļ�
//	int ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	ret = fgetc(stdin);
//	printf("%c\n", ret);
//	return 0;
//}




//����Ļ����ʾ

//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//}



//����д

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - ��������д
//	fputs("abcdef\n", pf);
//	fputs("qwertyuiop", pf);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//���ж�

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fgets(arr,4,pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};

//д���ʽ������

//int main()
//{
//	struct S s = { "abcdef",10,5.5f };
//
//	FILE* pf = fopen( "test.dat","w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д���ʽ������
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//��ȡ��ʽ������



//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { "abcdef",10,5.5f };
//
//	FILE* pf = fopen("test.dat", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	//���ļ�
//	scanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//��ӡ
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�����ƵĶ�д

//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { "abcde",10,5.5f };
//	//�����Ƶ���ʽд
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//д�ļ�
//	fwrite(&s,sizeof(struct S),1,pf);
//
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}





//struct S
//{
//	char arr[10];
//	int num;
//	float sc;
//};
//
//int main()
//{
//	struct S s = { "abcde",10,5.5f };
//	//�����Ƶ���ʽд
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//
//
//
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//
//
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}







//scanf - ��Ա�׼����ĸ�ʽ�������� - stdin
//fscanf - ��������������ı�׼��ʽ����������� - stdin/�ļ�
//sscanf - ��һ���ַ����ж�ȡһ����ʽ��������

//printf - ��Ա�׼����ĸ�ʽ�������� - stdout
//fprintf - �������������ĸ�ʽ�������� - stdout/�ļ�
//sprintf - ��һ����ʽ��������ת��Ϊ�ַ���



struct S
{
	char arr[10];
	int age;
	float f;
};

int main()
{
	struct S s = { "hello",20,5.5f };
	struct S tmp = { 0 };
	char buf[100] = { 0 };
	sprintf(buf, "%s %d %f", s.arr, s.age, s.f);
	//sprintf - ��һ����ʽ��������ת��Ϊ�ַ���
	printf("%s\n", buf);

	//��buf�ַ����л�ԭ��һ���ṹ������
	sscanf(buf,"%s %d %f",tmp.arr,&(tmp.age),&(tmp.f));
	//sscanf - ��һ���ַ����ж�ȡһ����ʽ��������

	printf("%s %d %f", tmp.arr, tmp.age, tmp.f);
	return 0;
}






