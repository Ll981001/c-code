#define _CRT_SECURE_NO_WARNINGS 1
//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�//���
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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