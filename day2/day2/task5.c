#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main5()
{
	int x=0;
	int y=0;
	int temp = 0;
	printf("����������������");
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
	printf("���Լ��Ϊ%d\n", y);
	return 0;
}