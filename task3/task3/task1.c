#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//编写登录程序，用户输入三次密码
int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", &password);
		if (strcmp(password,"123456")==0 )//(==)不能比较两个字符串  比较字符串要用函数strcmp，若两个字符串相同返回值为零
		{
			printf("密码正确");
			break;
		}
	}
	if (i == 3)
		printf("无法登录");

	return 0;
}