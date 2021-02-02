#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//求10个整数中的最大值
int main3()
{
	int a[10] = {0};
	int i = 0;
	int max = 0;
	for (i = 0; i < 10; ++i)
		scanf("%d\n", &a[i]);
	for (i = 0; i < 10; ++i)
		if (a[i] > max)
			max = a[i];
	printf("Max=%d\n", max);

	return 0;
}