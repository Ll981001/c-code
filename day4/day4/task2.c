#define _CRT_SECURE_NO_WARNINGS 1
//求出0～999之间的所有“水仙花数”并输出。	
//水仙花数”是指一个三位数，其各位数字的立方和正好等于该数本身，如；153＝1＋5*5*5＋3*3*3，则153是一个“水仙花数”。
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 100; i <= 999; i++)
	{
		if (pow(i /100, 3) + pow((i / 10)%10, 3) + pow(i%10,3) == i)
			printf("%d ", i);
	}
	return 0;
}