#include <stdio.h>

// 判断闰年：是闰年返回1，不是返回0
int isLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    return 0;
}

// 日期转天数：year年month月day日 → 返回这一年的第几天
int dateToDay(int year, int month, int day)
{
    // 平年每个月的天数
    int monDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int sum = 0;
    int i;
    for (i = 0; i < month - 1; i++)
    {
        sum += monDay[i];
    }
    sum += day;
    // 闰年且月份超过2月，多加一天
    if (isLeap(year) && month > 2)
        sum += 1;
    return sum;
}

// 第几天转日期：给定年份、第n天，输出月、日（指针传参）
dayToDate(int year, int n, int* pMonth, int* pDay)
{
    int monDay[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int i;
    if (isLeap(year))
        monDay[1] = 29;
    for (i = 0; i < 12; i++)
    {
        if (n > monDay[i])
        {
            n -= monDay[i];
        }
        else
        {
            *pMonth = i + 1;
            *pDay = n;
            break;
        }
    }
}

int main()
{
    int choice;
    int y, m, d, dayNum;
    printf("====功能选择====\n");
    printf("1. 日期转换成天数\n");
    printf("2. 指定年份和第几天求出日期\n");
    printf("请输入选择：");
    scanf_s("%d", &choice);

    if (choice == 1)
    {
        printf("输入年 月 日：");
        scanf_s("%d %d %d", &y, &m, &d);
        dayNum = dateToDay(y, m, d);
        printf("该日期是%d年的第%d天\n", y, dayNum);
    }
    else if (choice == 2)
    {
        printf("输入年份 和 第几天：");
        scanf_s("%d%d", &y, &dayNum);
        dayToDate(y, dayNum, &m, &d);
        printf("%d年的第%d天是：%d月%d日\n", y, dayNum, m, d);
    }
    else
    {
        printf("输入选项错误！\n");
    }
    return 0;
}
