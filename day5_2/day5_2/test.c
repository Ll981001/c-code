#define _CRT_SECURE_NO_WARNINGS 1
//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
#include<stdio.h>
int findnum(int x,int arr[], int n)
{
	int left = 0, right = n - 1;
	int mid = 0;
	int flag=0;
	if (arr[left] < arr[right])//判断数组为单增或单减
		flag = 1;
	if (flag)//数组单增
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
	else //数组单减
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
//测试程序
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[1]);
	int x = 10;
	int result;
	result = findnum(x, arr, sz);
	printf("%d\n",result); //输出结果为9 
	return 0;

}