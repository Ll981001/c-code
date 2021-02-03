#define _CRT_SECURE_NO_WARNINGS 1
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
#include<stdio.h>
int main()
{
	int i = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			sum += 1.0 / i;//求解1/i时 要将1写成float类型 1.0  整数1除以2等于0
		else
			sum -= 1.0 / i;
	}
	printf("sum=%lf\n", sum);
	return 0;
}