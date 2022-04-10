#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//�ļ��������д



//fseek
//�����ļ�ָ��

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//�����ļ�ָ��
//	fseek(pf, -1, SEEK_CUR);
//	//SEEK_CUR ��ǰλ��
//	//SEEK_END ĩβλ��
//	//SEEK_SET ��ʼλ��
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//ftell
//ftell���ص�ǰ�ļ�ָ���������ʼλ�õ�ƫ����

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, -1, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//	//ftell���ص�ǰ�ļ�ָ���������ʼλ�õ�ƫ����
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//rewind
//���ļ�ָ��ص���ʼλ��

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, -1, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	int ret = ftell(pf);
//	printf("%d\n", ret);
//
//	//���ļ�ָ��ص���ʼλ��
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//�ı��ļ��Ͷ������ļ�

//10000��ASCII��ֵ��������̣�ռ����ֽ�
//�Զ�������ʽֻռ�ĸ��ֽ�

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL);
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&a, sizeof(int), 1, pf);
//
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//�ļ���ȡ�������ж�

//feof���������ж��ļ��Ƿ����
//Ӧ���ڵ��ļ�����ʱ���ж��Ƕ�ȡʧ�ܽ����������ļ�β����
//�жϽ���ԭ��

//fgetc�ڶ�ȡ����ʱ����EOF
//������ȡʱ���ص��Ƕ�ȡ����ASCII��ֵ

//fgets�ڶ�ȡ����ʱ������NULL
//������ȡʱ�����ش���ַ����Ŀռ���ʼ��ַ

//fread�ڶ�ȡ����ʱ�����ص���ʵ�ʶ�ȡ��������Ԫ�صĸ���
//������ֶ�ȡ��������Ԫ�صĸ���С��ָ����Ԫ�ظ�������������һ�ζ�ȡ��


//д�����test.txt�ļ�����һ�ݣ�����test2.txt

int main()
{
	FILE* pfread = fopen("test.txt", "r");

	if (pfread == NULL)
	{
		return 1;
	}

	FILE* pfwrite = fopen("test2.txt", "w");

	if (pfwrite == NULL)
	{
		fclose(pfread);
		pfread = NULL;
		return 1;
	}
	//�ļ��򿪳ɹ�
	

	//��д�ļ�
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		//д�ļ�
		fputc(ch, pfwrite);
	}

	if (feof(pfread))
	{
		printf("�����ļ�������־���ļ���������\n");

	}
	else if (ferror(pfread))
	{
		printf("�ļ���ȡʧ�ܽ���\n");
	}

	//�ر��ļ�
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}



//�ļ�������
//��漸��������ִ�� ���Ч��
