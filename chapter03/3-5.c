//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i=10000; i<=99999; i++)
//    {
//        // 12345;
//        // 1 2345
//        // 12 345
//        // 123 45
//        // 1234 5
//        int j = 0;
//        int sum = 0;
//        for (j=10000; j>=10; j/=10)
//        {
//            sum += (i / j) * (i % j);
//        }
//        if (sum == i)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}