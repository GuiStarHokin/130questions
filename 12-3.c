//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//// �Գ���
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i=100; i<=999; i++)
//    {
//        int j = 2;
//        for (j=2; j<i; j++)
//        {
//            // ��������
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        // ������
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
//// �Գ���
//// ������/��������1
//// ���Ƿ���0
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
//        // ������/���ط���1
//        if (IsPrime(i))
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}