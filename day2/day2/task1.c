#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//利用临时变量交换两个数的值
int main1()
{
	int a = 4;
	int b = 6;
	int tem;
	tem = a;
	a = b;
	b = tem;
	return 0;
}
