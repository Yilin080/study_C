
#include <stdio.h>

// 迭代（循环）求n!
long long fact_iter(int n)
{
    long long res = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }
    return res;
}

// 递归求n!
long long fact_rec(int n)
{
    if (n == 0 || n == 1)   // 递归终止条件：0!和1!都是1
        return 1;
    return n * fact_rec(n - 1);
}

int main()
{
    int n;
    printf("请输入n：");
    scanf_s("%d", &n);
    if (n < 0)
    {
        printf("负数没有阶乘！\n");
        return 0;
    }
    printf("迭代法求得 %d! = %lld\n", n, fact_iter(n));
    printf("递归法求得 %d! = %lld\n", n, fact_rec(n));
    return 0;
}
