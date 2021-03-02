#define _CRT_SECURE_NO_WARNINGS 1

//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#include<stdio.h>

int main()
{
	int input1 = 0;
	int input2 = 0;
	printf("请输入两个整数：");
	// 111 1100 1111---1999
	//1000 1111 1011---2299
	scanf("%d%d", &input1,&input2);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((input1 >> i) & 1) != ((input2 >> i) & 1))
		{
			count++;
		}

	}
	printf("%d", count);
	return 0;
}