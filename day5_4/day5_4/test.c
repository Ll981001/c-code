#define _CRT_SECURE_NO_WARNINGS 1
//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
#include<stdio.h>
int main()
{
	int ch = 0;
	printf("本程序实现大小写字母转换，请输入字符%\n"); 
	while (1)
	{
		ch = getchar();
		if ((ch >= 'A')&&(ch <= 'Z'))
			printf("%c\n", ch + 32);//%c 字符类型  %s字符串类型
		else if ((ch >= 'a')&&(ch <= 'z'))
			printf("%c\n", ch - 32);
		
	}
	return 0;
}