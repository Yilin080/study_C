#include<stdio.h>
int main()
{
    int i;                              /* 棋盘格子编号，1 到 64 */
    unsigned long long now = 1;         /* 当前格子的麦粒数，第1格为1粒 */
    unsigned long long total = 0;       /* 所有格子的麦粒总数 */
    double volume;

    for (i = 1; i <= 64; i++)
    {
        total = total + now;            /* 把当前格子的麦粒加到总数中 */

        
        printf("第%2d格：%llu 粒，累计：%llu 粒\n", i, now, total);

        /* 下一格是当前格的两倍。
           第64格之后不再乘2，避免超出 unsigned long long 的范围 */
        if (i < 64)
        {
            now = now * 2;
        }
    }

    
    volume = (double)total / 1.4e8;
    printf("\n");
    printf("总麦粒数 = %llu 粒\n", total);
    printf("小麦总体积约为 %.2f 立方米\n", volume);
    printf("即约为 %.2e 立方米\n", volume);

    return 0;
}