#include<stdio.h>
int main()
{
    int n;          /* 用户输入的最长行星号数 */
    int half;       /* 上半部分的行数（包含最长行） */
    int i, j;       /* 循环控制变量 */
    
    printf("请输入最长行的星号数（请务必输入奇数，如 3、5、7）：");
    scanf_s("%d", &n);

    
    if (n % 2 == 0) {
        printf("输入错误，菱形大小必须是奇数！\n");
        return 1;
    }

    
    half = (n + 1) / 2;

    /* 打印上半部分（包含最长行） */
    for (i = 1; i <= half; i++) {

    /* 打印前面的空格：规律是 (half - i) * 2 个 */
        for (j = 1; j <= (half - i) * 2; j++) {
            printf(" ");
        }

    /*打印星号和星号间的空格：规律是 2*i - 1 个星号 */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            if (j < 2 * i - 1) {  /* 只要不是本行最后一个星号，后面就加一个空格 */
                printf(" ");
            }
        }

        /* 3. 一行打印完毕，换行 */
        printf("\n");
    }

    /* 打印下半部分（不含最长行）
     循环变量 i 从 half-1 开始递减到 1，实现对称打印 */
    for (i = half - 1; i >= 1; i--) {

        /* 1. 打印前面的空格 */
        for (j = 1; j <= (half - i) * 2; j++) {
            printf(" ");
        }

        /* 2. 打印星号和星号间的空格 */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
            if (j < 2 * i - 1) {
                printf(" ");
            }
         
        }

        printf("\n");
        
    }

    return 0;
}