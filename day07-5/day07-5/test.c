#define _CRT_SECURE_NO_WARNINGS 1
//5.递归和非递归分别实现strlen
#include<stdio.h>
//非递归
int strlen1(char str[])
{
	int len = 0;
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	return len ;
}
//递归
int strlen2(char* str)
{
	if (*str != '\0')
		return 1 + strlen2(str + 1);
	else
		return 0;
}
int main()
{
	char str[] = { "adasffdsg" };
	int len1 =strlen1(str);
	printf("字符串长度为%d\n", len1);
	int len2 = strlen2(str);
	printf("字符串长度为%d\n", len2);

	return 0;
}
