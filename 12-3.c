//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//// 试除法
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i=100; i<=999; i++)
//    {
//        int j = 2;
//        for (j=2; j<i; j++)
//        {
//            // 不是质数
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        // 是质数
//        if (i == j)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}
//*/
//
//// 试除法
//// 是素数/质数返回1
//// 不是返回0
//
//int IsPrime(int i)
//{
//    int j = 0;
//    for (j = 2; j < i; j++)
//    {
//        if (i % j == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 999; i++)
//    {
//        // 是素数/质素返回1
//        if (IsPrime(i))
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}