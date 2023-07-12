//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
///*
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[51] = {0};
//    int i = 0;
//    for (i=0; i<n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &arr[i]);
//    for (i=0; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<n-i; j++)
//        {
//            if (arr[j] > arr[j+1])
//            {
//                int tmp = 0;
//                tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//            }
//        }
//    }
//    for (i=0; i<=n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//*/
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[51] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int num = 0;
//    scanf("%d", &num);
//    int flag = 0;
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > num)
//        {
//            flag = 1; // ÓÐ½»»»
//            arr[i + 1] = arr[i];
//            arr[i] = num;
//        }
//    }
//    if (flag == 0)
//    {
//        arr[n] = num;
//    }
//    for (i = 0; i <= n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}