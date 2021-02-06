#define _CRT_SECURE_NO_WARNINGS 1
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#include<stdio.h>
void printfchengfabiao(int x)
{
	int i = 1;
	for (i = 1; i <= x; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%-2d*%-2d=%-3d ", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int i = 1;
	printf("请输入乘法口诀表的行数：");
	scanf("%d", &i);
	printfchengfabiao(i);
	return 0;
	
}