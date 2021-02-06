#define _CRT_SECURE_NO_WARNINGS 1
//2.使用函数实现两个数的交换。
#include<stdio.h>
void swap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;

}
int main()
{
	int x, y;
	printf("请输入两个数\n");
	scanf("%d%d",&x,&y);
	swap(x, y);
	printf("交换后两个值为%d，%d\n", x, y);
	return 0;
}