#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int arr[],int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = i + 1;
	}
}
void empty(int arr[],int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
		arr[i] = 0;
}
void reverse(int arr[],int n)
{
	int i = 0, j = n - 1;
	int temp;
	while (i <= j)
	{
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		i++;
		j--;
	}
}
int main()
{
	int i = 0;
	int a[10] = {0};
	printf("初始化数组为1,2,3,4,5,6,7,8,9,10\n");
	init(a,10);//初始化数组为1,2,3,4,5,6,7,8,9,10
	for (i = 0;i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("清空数组\n");
	empty(a,10);//清空数组
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("初始化数组为1,2,3,4,5,6,7,8,9,10\n");
	init(a,10);
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	printf("\n");
	printf("对数组元素逆置\n");
	reverse(a,10);//对数组元素逆置
	for (i = 0; i <= 9; i++)
		printf("%d ", a[i]);
	return 0;
}