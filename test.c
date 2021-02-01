#include<stdio.h>
//全局变量作用域--整个工程
//局部变量作用域变量所在的局部范围
//int main()
//{
//	extern int g_val;//extern 声明外部符号
//	printf("%d\n", g_val);//未声明标识符
//	return 0;
//}

//计算两数之和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
////	int sum = 0;
//	//输入函数 scanf--scan function 
//	scanf_s("%d%d", &num1, &num2);//取地址符号&&
//	int sum = 0;//c语言语法规定，变量要定义在代码块之前
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//%f - 打印浮点型
//%lf-打印double型
//%d - 打印整型
//%c - 打印字符型
//%p - 打印地址
//%x - 打印十六进制
//char 1个字节  1B=8bit
//int 4个字节  32比特位 	
//short 2个字节 18比特位 2^16-1=65535
//long 4个字节
//long long 8个字节
//float 4个字节
//double 8个字节
//int a = 100;//全局变量
//int main()//主函数-程序入口-有且只有一个
//{
//	int a = 10;//局部变量和全局变量名字尽量不要相同
//	printf("%d\n", a); //当局部变量与全局变量名字相同时 局部变量优先
//	char b = 'A';
//	printf("%c\n",b); //\n换行，%c打印一个字符类型的数据
//	int age = 20;
//	printf("%d\n", age);//%d 打印一个整型数据
//	printf("hello world\n");
//	//定义float时一般
//	float f = 5.0f ;
//	return 0;
//}