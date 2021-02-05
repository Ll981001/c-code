#define _CRT_SECURE_NO_WARNINGS 1
//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
#include<stdio.h>
#include<string.h>
int main()
{
	char input[20] = {0};
	int count = 3;
	while (count)
	{
	printf("请输入密码（当前次数%d/3)\n", 4-count);
	scanf("%s", &input);
	count--;
	if (strcmp(input, "123456") == 0)
	{
		printf("登录成功\n");
		break;
	}
	}
	if (!count)
	{
		printf("错误次数过多，退出程序\n");
	}

}