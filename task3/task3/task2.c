#define _CRT_SECURE_NO_WARNINGS 1
//计算n的阶乘
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i = 1;
	int result = 1;
	int n;
	printf("请输入n的值：");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result *= i;
	}
	printf("%d的阶乘为:%d\n", n, result);//10的阶乘3628800

	return 0;
}