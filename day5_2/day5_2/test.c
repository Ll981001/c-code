#define _CRT_SECURE_NO_WARNINGS 1
//д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
#include<stdio.h>
int findnum(int x,int arr[], int n)
{
	int left = 0, right = n - 1;
	int mid = 0;
	int flag=0;
	if (arr[left] < arr[right])//�ж�����Ϊ�����򵥼�
		flag = 1;
	if (flag)//���鵥��
	{
		while (left <=right)
		{
			mid = (left + right) / 2;
			if (arr[mid] < x)
				left = mid + 1;
			else if (arr[mid] > x)
				right = mid - 1;
			else
			{
				return mid;
				break;
			}
		}
	}
	else //���鵥��
	{
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (arr[mid] < x)
				right = mid - 1;
			else if (arr[mid] > x)
				left = mid + 1;
			else
			{
				return mid;
				break;
			}
		}

	}
	if (left > right)
		return -1;
}
//���Գ���
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	int x = 10;
	int result;
	result = findnum(x, arr, sz);
	printf("%d\n",result); //������Ϊ9 
	return 0;

}