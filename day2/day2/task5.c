#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main5()
{
	int x=0;
	int y=0;
	int temp = 0;
	printf("请输入两个整数：");
	scanf("%d%d", &x, &y);
	if (x < y)
	{
		temp = y;
		y = x;
		x = temp;
	}
	int z = x % y;
	while (z != 0)
	{
		x = y;
		y = z;
		z = x % y;
	}
	printf("最大公约数为%d\n", y);
	return 0;
}