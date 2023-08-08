//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
///*
//int main()
//{
//    int n = 0;
//    int arr[1000] = {0};
//    int i = 0;
//    int ch = 0;
//    int sum = 0;
//    while ((ch = getchar()) != '\n')
//    {
//        arr[i] = ch;
//        i++;
//    }
//    int count = i;
//    for (i=0; i<count; i++)
//    {
//        if (arr[i] % 2 == 1)
//        {
//            arr[i] = 1;
//        }
//        else
//        {
//            arr[i] = 0;
//        }
//    }
//    int j = 0;
//    for (i=count-1; i>=0; i--)
//    {
//        sum += arr[i] * pow(10, j);
//        j++;
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//*/
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        int m = 0;
//        m = n % 10;
//        n /= 10;
//        if (m % 2 == 0)
//        {
//            m = 0;
//        }
//        else
//        {
//            m = 1;
//        }
//        sum += m * pow(10, i);
//        i++;
//    }
//    printf("%d\n", sum);
//    return 0;
//}