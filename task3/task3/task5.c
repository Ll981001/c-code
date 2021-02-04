#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//演示多个字符从两端移动，向中间汇聚
int main()
{
	char arr1[] = { 'W','e','l','c','o','m','e',' ','t','o',' ','w','o','r','l','d','!','!','!','!','\0' };
	char arr2[] = { '#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','\0' };
	int sz = sizeof(arr1) / sizeof(arr1[1]);  //此时sz为21 会将'\0'记录在内 所以最后一个字符应从sz-2开始
	//或用strlen（）函数
	int i = 0, j = sz - 1;
	printf("%s\n", arr2);
	Sleep(500);
	system("cls");//system("cls") 执行系统命令的函数 -cls -清空屏幕
	for (int i = 0, j = sz - 2; i <= j; i++, j--)
	{
		arr2[i] = arr1[i];
		arr2[j] = arr1[j];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
	}
	printf("%s\n", arr2);
	return 0;
}