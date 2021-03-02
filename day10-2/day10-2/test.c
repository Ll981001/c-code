#define _CRT_SECURE_NO_WARNINGS 1
//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
#include<stdio.h>
int main()
{
	int input = 0;
	printf("请输入一个数字\n");
	scanf("%d", &input);
	int a[16] = { 0 };
	int b[16] = { 0 };
	int i = 0;
	for (i = 0; i < 32;i++ )
	{
		a[i/2] = ((input >> i) & 1);
		i++;
		b[(i-1)/2] =( (input >> i) & 1);

	}
	for (i = 15; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 15; i >=0; i--)
	{
		printf("%d ", b[i]);
	}
	return 0;
}