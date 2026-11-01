#include <stdio.h>
int main()
{
	printf("写代码\n");
	printf("写博客\n");
	printf("%d\n", 0);//数字0代表0,字符0是48
	printf("%d\n", '0');//a=97,A=65
	printf("%c\n", 'a');
	printf("%d\n", 'a');//字符运算本质是ASCII值的运算
	printf("%d\n", 0 + 4);
	printf("%d\n", '0' + 4);//数字和字符代表的意义不同
	return 0;
}