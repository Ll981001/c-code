#define _CRT_SECURE_NO_WARNINGS
//�������������1000��2000֮�������
#include<stdio.h>
int main3()
{
	int i;
	for (i = 1000; i < 2001; i++)
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
			printf("%d ", i);
	return 0;
}