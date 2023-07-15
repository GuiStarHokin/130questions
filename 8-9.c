//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
///*
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i=1; i<=2019; i++)
//    {
//        // 1999
//        // 个位
//        if (i % 10 == 9) // 9
//        {
//            count++;
//        }
//        // 十位
//        else if ((i / 10) % 10 == 9) // 199 % 10
//        {
//            count++;
//        }
//        // 百位
//        else if ((i / 100) % 10 == 9)
//        {
//            count++;
//        }
//    }
//
//    printf("%d\n", count);
//    return 0;
//}
//*/
//
//int main()
//{
//    int count = 0;
//    int i = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            m /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}