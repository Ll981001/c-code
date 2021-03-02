#define _CRT_SECURE_NO_WARNINGS 1
//求一个整数存储在内存中的二进制中1的个数
#include<stdio.h>
int main()
{
	int num = 10;
	printf("请输入一个整数：");
	scanf("%d", &num);
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num>>i) & 1) == 1)
		{
			count++;
		}
		
	}
	printf("%d", count);
	return 0;
}