#include<stdio.h>
//输出100-200之间的素数
int main()
{
	int j;
	int i;
	for (j = 100; j <= 200; j++)
	{
		int flag = 1;//设置标志位判断j是否是素数
		for (i = 2; i < j; i++)
		{
			if (j%i == 0) flag = 0;//判断其是否能被1到其自身之间的数整除
		}
		if (flag == 1) printf("%d\n", j);

	}
	return 0;
}