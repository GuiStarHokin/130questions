//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//    int day[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        if (year % 4 == 0 && year % 100 != 0)
//        {
//            day[1] = 29;
//        }
//        else if (year % 400 == 0)
//        {
//            day[1] = 29;
//        }
//        else
//        {
//            day[1] = 28;
//        }
//
//        if (month < 1 || month > 12)
//        {
//            perror("输入月份有误!\n");
//        }
//        else
//        {
//            printf("%d\n", day[month - 1]);
//        }
//    }
//    return 0;
//}