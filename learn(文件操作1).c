#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//程序文件 
//.c .exe .obj

//数据文件
//程序运行时读写的数据，或输出内容的文件

//文件名
//文件路径+文件名主干+文件后缀
//c:\code\test\.txt


//文件的打开和关闭

//文件指针
//FILE类型的结构体变量

//int main()
//{
//	FILE* pf;//文件指针变量维护文件信息区
//	//pf指向文件信息区
//
//	//FILE* pf = fopen("test.dat", "w");//相对路径
//
//	FILE* pf = fopen("D:\\My Code(C)\\2022_4_9\\test.dat","w");//绝对路径
//	//"r" - 只读 - 不存在时报错
//	//"w" - 只写 - 销毁并清空打开 - 不存在时创建文件
//	//"a" - 追加 - 文件尾添加数据 - 不存在时创建文件
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//
//	return 0;
//}


//文件的顺序读写

//c语言程序，只要运行起来，就默认打开了3个流：
//stdin - 标准输入流 - 键盘
//stdout - 标准输出流 - 屏幕
//stderr - 标准错误流 - 屏幕


//字符输入函数 fgetc
//字符输出函数 fputc

//文本行输入函数 fgets
//文本行输入函数 fputs

//格式化输入函数 fscanf
//格式化输出函数 fprintf

//二进制输入 fread
//二进制输出 fwrite


//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//只读

//int main()
//{
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ret = fgetc(pf);
//	printf("%c\n", ret); 
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//	ret = fgetc(pf);
//	printf("%c\n", ret);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//从标准输入流stdin读取信息

//int main()
//{
//	//读文件
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




//在屏幕上显示

//int main()
//{
//	fputc('b', stdout);
//	fputc('i', stdout);
//	fputc('t', stdout);
//}



//按行写

//int main()
//{
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件 - 按照行来写
//	fputs("abcdef\n", pf);
//	fputs("qwertyuiop", pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//按行读

//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fgets(arr,4,pf);
//	printf("%s\n", arr);
//
//	fgets(arr, 4, pf);
//	printf("%s\n", arr);
//
//
//	//关闭文件
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

//写入格式化内容

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
//	//写入格式化内容
//	fprintf(pf, "%s %d %f", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//读取格式化内容



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
//	//读文件
//	scanf(pf, "%s %d %f", s.arr, &(s.num), &(s.sc));
//
//	//打印
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//二进制的读写

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
//	//二进制的形式写
//	FILE* pf = fopen("test.dat", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//	//写文件
//	fwrite(&s,sizeof(struct S),1,pf);
//
//
//
//	//关闭文件
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
//	//二进制的形式写
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 0;
//	}
//
//
//
//	//读文件
//	fread(&s, sizeof(struct S), 1, pf);
//
//
//	printf("%s %d %f\n", s.arr, s.num, s.sc);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}







//scanf - 针对标准输入的格式化输出语句 - stdin
//fscanf - 针对所有输入流的标准格式化的输入语句 - stdin/文件
//sscanf - 从一个字符串中读取一个格式化的数据

//printf - 针对标准输出的格式化输出语句 - stdout
//fprintf - 针对所有输出流的格式化输出语句 - stdout/文件
//sprintf - 把一个格式化的数据转化为字符串



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
	//sprintf - 把一个格式化的数据转化为字符串
	printf("%s\n", buf);

	//从buf字符串中还原出一个结构体数据
	sscanf(buf,"%s %d %f",tmp.arr,&(tmp.age),&(tmp.f));
	//sscanf - 从一个字符串中读取一个格式化的数据

	printf("%s %d %f", tmp.arr, tmp.age, tmp.f);
	return 0;
}






