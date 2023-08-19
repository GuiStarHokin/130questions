//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int i = 0;
//    scanf("%d %d", &m, &n);
//    int img1[m][n];
//    int img2[m][n];
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &img1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &img2[i][j]);
//        }
//    }
//    double right = 0.0;
//    for (i = 0; i < m; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            if (img1[i][j] == img2[i][j])
//            {
//                right++;
//            }
//        }
//    }
//    printf("%.2lf\n", (right / (m * n)) * 100);
//    return 0;
//}