#include <stdio.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = { 'a','b','c','d','e','f','\0'};//再添加一个单字符\0,终止这个数组
	printf("%s\n",arr1);
	printf("%s",arr2);//字符串末尾默认有\0终止,而数组没有\0故后面有乱码
	return 0;
}