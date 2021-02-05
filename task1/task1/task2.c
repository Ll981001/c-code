#define _CRT_SECURE_NO_WARNINGS
//本代码用于输出乘法口诀表
#include<stdio.h>
int  main2()
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("%dx%d=%-2d ", i, j, i*j);//%-2d两位数左对齐
		}
		printf("\n");
	}
	return 0;
}
