#define _CRT_SECURE_NO_WARNINGS 1
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
#include<stdio.h>
void init(int arr[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = i;
	}
}
void  empty(int arr[],int n)
{
	int i = 0;
	for (i = 1; i < n; i++)
	{
		arr[i] = 0;
	}
}
int reverse(int arr[], int left, int right)
{
	int i, j;
	int temp;
	for (i = left, j = right; i <= j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	return 1;
}
int main()//���Գ���
{
	int i = 1;
	int arr1[10] = { 0 };
	init(arr1, 10);
	reverse(arr1, 0, 9);
	for (i = 0; i <10; i++)
	{
		printf("%d ", arr1[i]);
	}

	
	return 0;
}
