#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//计算1！+2！+3！+....+10!
int main()
{
	int sum = 0;
	int i = 1;
	for (int j = 1; j < 11; j++)
	{
		int result = 1;//若result在上面定义 则
		for (i = 1; i < j + 1; i++)
		{
			result *= i; // 若外层循环无定义，则result会累计之前的结果
		}//	n的阶乘
		sum += result;
	}
	printf("%d\n", sum);//4037913
	return 0;
}//时间复杂度为n^2
//优化上述代码
int main()
{
	int sum = 0;
	int result = 1;

	for (int j = 1; j < 11; j++)
	{
		result = result * j;
		sum += result;
	}
	printf("%d\n", sum);//4037913
	return 0;
}
//时间复杂度为n	