#define _CRT_SECURE_NO_WARNINGS 1
//5.实现一个函数，判断一个数是不是素数。
#include<stdio.h>
//是素数返回1，否则返回0
int is_prime(int n)  
{
	int i = 2;
	for (i = 2; i < n / 2; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int a = 0;
	printf("请输入一个整数\n");
	scanf("%d", &a);
	if (is_prime(a))
	{
		printf("%d是素数\n", a);
	}
	else 
		printf("%d不是素数\n", a);
	return 0;
}