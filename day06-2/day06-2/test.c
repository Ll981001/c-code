#define _CRT_SECURE_NO_WARNINGS 1
//2.ʹ�ú���ʵ���������Ľ�����
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
	printf("������������\n");
	scanf("%d%d",&x,&y);
	swap(x, y);
	printf("����������ֵΪ%d��%d\n", x, y);
	return 0;
}