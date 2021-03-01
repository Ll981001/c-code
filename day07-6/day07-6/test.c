#define _CRT_SECURE_NO_WARNINGS 1
//6.递归和非递归分别实现求n的阶乘
#include<stdio.h>
//非递归
int calculate1(int n)
{
	int result = 1;
	int i = 1;
	for (i = 1; i <= n; i++)
		result *= i;
	return result;
}
//递归
int calculate2(int n)
{
	if (n > 1)
	{
		return n * calculate2(n - 1);
	}
	return 1;
}
int main()
{
	int n = 0;
	printf("请输入一个整数n:");
	scanf("%d", &n);
	int result1=calculate1(n);
	printf("结果是%d\n", result1);
	int result2 = calculate2(n);
	printf("结果是%d\n", result2);
}