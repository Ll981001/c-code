#define _CRT_SECURE_NO_WARNINGS 1
//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。//输出
//要求：不能使用C函数库中的字符串操作函数。
//"asd\0"
//"dsa"
#include<stdio.h>
void  reverse_string(char * str)
{
	if (*(str+1) != '\0')
		reverse_string(str + 1);
	printf("%c", *str);


}
int main()
{
	char str[] = { "hello,com" };
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	reverse_string(str);

	return 0;
}