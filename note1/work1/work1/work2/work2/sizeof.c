#include <stdio.h>
int main()
{
	int a = 10000;
	printf("%zd\n", sizeof a +3);//sizeof后接变量名可以不用括号,变量类型要括号,sizeof计算的是变量的类型的字节数,和int a有多少无关
	printf("%zd\n", sizeof(int));//但是表达式要加括号不然从左到右依次计算,计算的是表达式的类型的字节数,并且不是会真正计算赋值
	return 0;
}