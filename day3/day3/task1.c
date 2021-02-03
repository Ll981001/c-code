#define _CRT_SECURE_NO_WARNINGS 1
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
#include<stdio.h>
#include<string.h>
//采用按位异或解决
int main()
{
	int a[] = {1,2,3,5,6,78,9,10};
	int b[] = {13,23,34,54,6,67,8,24};
	int len = sizeof(a) / sizeof(a[1]);
	int i = 0;
	printf("交换前a[]=");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("交换前b[]=");
	for (i = 0; i < len; i++)
		printf("%d ", b[i]);
	for (i = 0; i < len; i++)
	{
		a[i] = a[i] ^ b[i];
		b[i] = a[i] ^ b[i];
		a[i] = a[i] ^ b[i];
	}
	printf("\n");
	printf("交换后a[]=");
	for (i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("交换后b[]=");
	for (i = 0; i < len; i++)
		printf("%d ", b[i]);
	return 0;
}