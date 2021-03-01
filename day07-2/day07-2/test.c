#define _CRT_SECURE_NO_WARNINGS 1
//2.编写一个函数实现n^k，使用递归实现
#include<stdio.h>

int calculate(int n, int k)
{
	if (k > 0)
		return n * calculate(n, k - 1);
	else
		return 1;
}
int main()
{
	int n = 0, k = 0;
	printf("请输入n和k的值\n");
	scanf("%d%d", &n, &k);
	int result=calculate(n, k);
	printf("结果是%d\n", result);
	return 0;
}