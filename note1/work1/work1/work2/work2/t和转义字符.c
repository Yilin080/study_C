#include <stdio.h>
int main()
{
	printf("ab\tc\t\n");//"\t"对齐到下一个水平制表符,包含已有的字符在内共8字节
	printf("yilin\t18\n");
	printf("yunan\t12\n"); //可以用来对齐人名和年龄

	printf("%c\n", '\144');//"\xdd"写1-2个十六进制数
	printf("%c", '\x66');//"\ddd"可以写1-3个8进制数字,利用ASCII值打印字符
	//\b转义字符算作一个字符,\121也是一个字符
	//\**\之间不能再嵌套一个\**\注释
	//Ctrl+k+c添加注释,ctrl+k+u取消注释


	return 0;
}