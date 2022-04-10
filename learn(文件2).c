#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//文件的随机读写



//fseek
//调整文件指针

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//调整文件指针
//	fseek(pf, -1, SEEK_CUR);
//	//SEEK_CUR 当前位置
//	//SEEK_END 末尾位置
//	//SEEK_SET 起始位置
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//ftell
//ftell返回当前文件指针相对于起始位置的偏移量

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
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
//	//ftell返回当前文件指针相对于起始位置的偏移量
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//rewind
//让文件指针回到起始位置

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读取文件
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
//	//让文件指针回到起始位置
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//文本文件和二进制文件

//10000以ASCII码值输出到磁盘，占五个字节
//以二进制形式只占四个字节

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL);
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fwrite(&a, sizeof(int), 1, pf);
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//文件读取结束的判定

//feof不能用来判定文件是否结束
//应用于当文件结束时，判断是读取失败结束，还是文件尾结束
//判断结束原因

//fgetc在读取结束时返回EOF
//正常读取时返回的是读取到的ASCII码值

//fgets在读取结束时，返回NULL
//正常读取时，返回存放字符串的空间起始地址

//fread在读取结束时，返回的是实际读取到的完整元素的个数
//如果发现读取到的完整元素的个数小于指定的元素个数，这就是最后一次读取了


//写代码把test.txt文件拷贝一份，生成test2.txt

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
	//文件打开成功
	

	//读写文件
	int ch = 0;
	while ((ch = fgetc(pfread)) != EOF)
	{
		//写文件
		fputc(ch, pfwrite);
	}

	if (feof(pfread))
	{
		printf("遇到文件结束标志，文件正常结束\n");

	}
	else if (ferror(pfread))
	{
		printf("文件读取失败结束\n");
	}

	//关闭文件
	fclose(pfread);
	pfread = NULL;
	fclose(pfwrite);
	pfwrite = NULL;

	return 0;
}



//文件缓冲区
//多存几个数据再执行 提高效率
