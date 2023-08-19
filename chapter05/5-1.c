//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
///*
//// method1
//int main()
//{
//    int ch = 0;
//    int countA = 0;
//    int countB = 0;
//    while (((ch = getchar()) != '0') && (ch != EOF))
//    {
//        if (ch == 'A' || ch == 'a')
//        {
//            countA++;
//        }
//        else if (ch == 'B' || ch == 'b')
//        {
//            countB++;
//        }
//        else
//        {
//            printf("oops!\n");
//        }
//    }
//    if (countA > countB)
//    {
//        printf("A\n");
//    }
//    else if (countB > countA)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("E\n");
//    }
//    return 0;
//}
//*/
//
//
///*
//
//// method2
//
//int main()
//{
//    char buf[100] = {0};
//    int countA = 0;
//    int countB = 0;
//    int i = 0;
//    gets(buf);
//    while (buf[i] != '0')
//    {
//        if (buf[i] == 'A' || buf[i] == 'a')
//        {
//            countA++;
//        }
//        else if (buf[i] == 'B' || buf[i] == 'b')
//        {
//            countB++;
//        }
//        else
//        {
//            printf("oops!\n");
//        }
//        i++;
//    }
//    if (countA > countB)
//    {
//        printf("A\n");
//    }
//    else if (countA < countB)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("E\n");
//    }
//    return 0;
//}
//*/
//
//int main()
//{
//    char buf[100] = { 0 };
//    gets(buf);
//    int i = 0;
//    int flag = 0;
//    while (buf[i] != '0')
//    {
//        if (buf[i] == 'A' || buf[i] == 'a')
//        {
//            flag++;
//        }
//        else if (buf[i] == 'B' || buf[i] == 'b')
//        {
//            flag--;
//        }
//        else
//        {
//            printf("oops!\n");
//        }
//        i++;
//    }
//    if (flag > 0)
//    {
//        printf("A\n");
//    }
//    else if (flag < 0)
//    {
//        printf("B\n");
//    }
//    else
//    {
//        printf("E\n");
//    }
//    return 0;
//}