#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//1.在屏幕上输出以下图案：
//		*
//	   ***
//	  *****
//	 *******
//	*********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//		*
int main()
{
	char arr1[] = "*************";
	char arr2[] = "             ";
	char arr3[] = "             ";
	char temp;
	int sz = strlen(arr1);
	int mid = (sz - 1) / 2;
	for (int i = mid, j = mid; i >= 0, j <= sz - 1;i--,j++)
	{
		arr2[i] = arr1[i];
		arr2[j] = arr1[j];
		printf("%s\n", arr2);
	}
	for (int i = 0, j = sz-1; i <= j;i++,j--)
	{
		arr2[i] = arr3[i];
		arr2[j] = arr3[j];
		printf("%s\n", arr2);
	}

	return 0;
}