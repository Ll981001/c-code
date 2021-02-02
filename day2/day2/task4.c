#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//将三个数按从小到大的顺序输出
int main4()
{
	int a;
	int b;
	int c;
	int temp;
	scanf("%d%d%d", &a,&b,&c);//输入时可以用空格 回车 teb 隔开
	//scanf("%4d", &temp);//此时代表输入整数的宽度为4
	if (a < b) // if 后面若只有一行代码 则可以省略大括号
	{
		temp = a;//此时必须要大括号
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d>%d>%d", a, b, c);		
	return 0;
}