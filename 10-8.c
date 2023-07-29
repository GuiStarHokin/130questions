//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    int tmp[n][m];
//    int i = 0;
//    int k = 0;
//    char t = 0;
//    int a = 0;
//    int b = 0;
//    for (i=0; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    scanf("%d", &k);
//    int p = 0;
//    for (p=0; p<k; p++)
//    {
//        //getchar(); // 吸收'\n'
//        scanf(" %c %d %d", &t, &a, &b); // " %c" 消除%d后的所有后继空白符，然后读一个char
//        for (i=0; i<n; i++)
//        {
//            int j = 0;
//            for (j=0; j<m; j++)
//            {
//                tmp[i][j] = arr[i][j];
//            }
//        }
//        if (t == 'r')
//        {
//            int j = 0;
//            for (j=0; j<m; j++)
//            {
//                arr[a-1][j] = tmp[b-1][j];
//                arr[b-1][j] = tmp[a-1][j];
//            }
//        }
//        else if (t == 'c')
//        {
//            for (i=0; i<n; i++)
//            {
//                arr[i][a-1] = tmp[i][b-1];
//                arr[i][b-1] = tmp[i][a-1];
//            }
//
//        }
//    }
//    for (i=0; i<n; i++)
//    {
//        int j = 0;
//        for (j=0; j<m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//*/
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n][m];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    int p = 0;
//    char t = 0;
//    int a = 0;
//    int b = 0;
//    for (p = 0; p < k; p++)
//    {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r')
//        {
//            int j = 0;
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            int j = 0;
//            for (i = 0; i < n; i++)
//            {
//                int tmp = arr[i][a - 1];
//                arr[i][a - 1] = arr[i][b - 1];
//                arr[i][b - 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}