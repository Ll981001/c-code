#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//�������������е�k
int binsearch(int x, int v[], int n)
{
	int i = 0, j = n - 1, mid = (i + j) / 2;
	while (i <= j)
	{
		int mid = (i + j) / 2;
		if (v[mid] < x)
		{
			i = mid + 1;
		}
		else if (v[mid] > x)
			j = mid - 1;
		else
		{
			printf("�ҵ�%d���������е��±�Ϊ%d\n", x, mid);
			return mid;
		}
	}
	return 0;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int result;
	result = binsearch(k, arr, sz);
	printf("�ҵ�%d���������е��±�Ϊ%d\n", k, result);
}