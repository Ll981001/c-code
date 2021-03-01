#define _CRT_SECURE_NO_WARNINGS 1
//7.递归方式实现打印一个整数的每一位
#include<stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	print(n);
	return 0;
}