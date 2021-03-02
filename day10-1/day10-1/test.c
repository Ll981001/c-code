#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//程序原型：
int  count_one_bits(unsigned int value)
{
	// 返回 1的位数
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if ((value>>i) & 1 == 1)
		{
			count++;
		}
	}
	return count;

}
#include<stdio.h>
int main()
{
	unsigned int input = 0;
	printf("请输入一个正整数：");
	scanf("%d",&input);
	int count =count_one_bits(input);
	printf("二进制中1的位数是%d\n",count);
	return 0;
}
