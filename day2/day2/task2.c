#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//不用临时变量交换两个数的值 利用相加再相减会导致溢出
//采用按位异或
int main2()
{
	int x, y;
	printf("请输入两个整数\n");
	scanf("%d%d", x, y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	//int a = 4;
	//int b = 6;
	//a = a + b;
	//b = a - b;
	//a = a - b;
	return 0;
}
