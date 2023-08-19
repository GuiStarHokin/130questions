//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//    double price = 0.0;
//    int month = 0;
//    int day = 0;
//    int flag = 0;
//    double cut = 1.0;
//    scanf("%lf %d %d %d", &price, &month, &day, &flag);
//    if (month == 11 && day == 11)
//    {
//        cut = 0.7;
//    }
//    else if (month == 12 && day == 12)
//    {
//        cut = 0.8;
//    }
//    price = price * cut - flag * 50;
//    if (price < 0.0)
//    {
//        printf("%.2lf", 0.0);
//    }
//    else
//    {
//        printf("%.2lf", price);
//    }
//    return 0;
//}