#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//不用临时变量交换两个数的值 利用相加再相减
int main2()
{
	int a = 4;
	int b = 6;
	a = a + b;
	b = a - b;
	a = a - b;
	return 0;
}