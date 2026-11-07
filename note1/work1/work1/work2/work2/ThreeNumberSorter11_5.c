//#include <stdio.h>
//int main()
//{
//    int a, b, c, temp;
//    int flag; // 标记：1升序，0降序
//
//    // 输入三个数字
//    printf("请输入3个整数：");
//    scanf_s("%d %d %d", &a, &b, &c);
//    printf("请选择排序方式：1-升序  0-降序：");
//    scanf_s("%d", &flag);
//
//    // 先把三个数排好升序
//    if (a > b)
//    {
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a > c)
//    {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b > c)
//    {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//
//    // 根据标记输出升序或者反过来输出降序
//    if (flag == 1)
//    {
//        printf("升序结果：%d %d %d\n", a, b, c);
//    }
//    else
//    {
//        printf("降序结果：%d %d %d\n", c, b, a);
//    }
//    return 0;
//}

#include <stdio.h>

// sort排序函数
// x,y,z：三个数的地址；flag=1升序，flag=0降序
 sort(int* x, int* y, int* z, int flag)
{
    int temp;
    // 先排成升序
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }


    // 如果是降序，交换变成降序
    if (flag == 0)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
}

int main()
{
    int a, b, c;
    int op;
    printf("请输入3个整数：");
    scanf_s("%d %d %d", &a, &b, &c);
    printf("选择排序方式：1升序，0降序：");
    scanf_s("%d", &op);

    // 调用排序函数
    sort(&a, &b, &c, op);

    printf("排序之后：%d %d %d\n", a, b, c);
    return 0;
}
