#define _CRT_SECURE_NO_WARNINGS 1
//编写程序数一下 1到 100 的所有整数中出现多少个数字9。
#include<stdio.h>
int Count(int x, int y)
{
	int i;
	int cnt = 0;
	for (i = x; i <= y; i++)
	{
		if (i / 10 == 9 || i % 10 == 9)//i/10是i的十位数字，i%10是i的个位数字 
			cnt++;
	}
	return cnt;
}

int main()
{ 
	int count;
	count=Count(1, 100);
	printf("%d\n", count);
	return 0;
}