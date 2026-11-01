#include <stdio.h>
#include <stdbool.h>
int main()
{
	_Bool h = true;//布尔类型除了要用stdbool头文件,也需要stdio输入输出
	if (h)
		printf("布尔类型只有true和false");
	return 0;
}