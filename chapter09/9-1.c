//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdint.h>
//#include <stdio.h>
//
///*
//int main()
//{
//    int n = 0.0;
//    scanf("%d", &n);
//    double score[n];
//    int i = 0;
//    for (i=0; i<n; i++)
//    {
//        scanf("%lf", &score[i]);
//    }
//    for (i=0; i<n-1; i++)
//    {
//        int j = 0;
//        for (j=0; j<n-1-i; j++)
//        {
//            if (score[j] > score[j+1])
//            {
//                double tmp = 0.0;
//                tmp = score[j];
//                score[j] = score[j+1];
//                score[j+1] = tmp;
//            }
//        }
//    }
//    double sum = 0.0;
//    for (i=0; i<n; i++)
//    {
//        sum += score[i];
//    }
//    printf("%.2lf %.2lf %.2lf\n", score[n-1], score[0],(sum/n));
//    return 0;
//}
//*/
//
//int main()
//{
//    double score = 0.0;
//    double max = 0.0; // 假设的最高分
//    double min = 100.0; // 假设的最低分
//    double sum = 0.0;
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%lf", &score);
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//        sum += score;
//    }
//    printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);
//    return 0;
//}