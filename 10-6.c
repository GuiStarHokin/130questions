//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[n][n];
//    for (i=0; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<n; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    for (i=1; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<=i-1; j++)
//        {
//            if (arr[i][j] != 0)
//            {
//                printf("NO\n");
//                return 0;
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n][n];
//    int i = 0;
//    for (i=0; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i=0; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<n; j++)
//        {
//            if (i>j)
//            {
//                if (arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n][n];
//    int i = 0;
//    for (i=0; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<n; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//            if (i>j)
//            {
//                if (arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}
//*/
//
//int main()
//{
//    int n = 0;
//    int num = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int  j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d ", &num);
//            if (i > j)
//            {
//                if (num != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}
