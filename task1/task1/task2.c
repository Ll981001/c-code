#define _CRT_SECURE_NO_WARNINGS
//��������������˷��ھ���
#include<stdio.h>
int  main2()
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("%dx%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}