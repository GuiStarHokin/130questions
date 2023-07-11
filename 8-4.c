//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
///*
//单组输入
//int main()
//{
//    int score[7] = {0};
//    int i = 0;
//    int sum = 0;
//    while (scanf("%d", &score[i]) != EOF)
//    {
//        i++;
//    }
//    for (i=0; i<6; i++)
//    {
//        int j = 0;
//        for (j=0; j<6-i; j++)
//        {
//            if (score[j] > score[j+1])
//            {
//                int tmp = 0;
//                tmp = score[j];
//                score[j] = score[j+1];
//                score[j+1] = tmp;
//            }
//        }
//    }
//    for (i=1; i<6; i++)
//    {
//        sum += score[i];
//    }
//    printf("%.2lf\n", sum/5.0);
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    int count = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        sum += score;
//        max = (score > max) ? score : max;
//        min = (score < min) ? score : min;
//        count++;
//        // count==7为完成一组计算并输出
//        if (count == 7)
//        {
//            printf("%.2lf\n", (sum-max-min)/5.0);
//            sum = 0;
//            max = 0;
//            min = 100;
//            count = 0;
//        }
//    }
//    return 0;
//}
//*/
//
//
///*
//int main()
//{
//    int score[7] = {0};
//    int flag = 0;
//    int i = 0;
//    int sum = 0;
//    while (1)
//    {
//        flag = scanf("%d", &score[i]);
//        i++;
//        if (flag == EOF)
//        {
//            break;
//        }
//        if (i==7)
//        {
//            for (i=0; i<6; i++)
//            {
//                int j = 0;
//                for (j=0; j<6-i; j++)
//                {
//                    if (score[j] > score[j+1])
//                    {
//                        int tmp = 0;
//                        tmp = score[j];
//                        score[j] = score[j+1];
//                        score[j+1] = tmp;
//                    }
//                }
//            }
//            for (i=1; i<6; i++)
//            {
//                sum += score[i];
//            }
//            printf("%.2lf\n", sum / 5.0);
//            sum = 0;
//            i = 0;
//        }
//    }
//}
//*/
//
//int main()
//{
//    int score = 0;
//    int arr[7] = { 0 };
//    int i = 0;
//    int sum = 0;
//    while (scanf("%d", &score) != EOF)
//    {
//        arr[i] = score;
//        i++;
//        if (i == 7)
//        {
//            for (i = 0; i < 6; i++)
//            {
//                int j = 0;
//                for (j = 0; j < 6 - i; j++)
//                {
//                    if (arr[j] > arr[j + 1])
//                    {
//                        int tmp = 0;
//                        tmp = arr[j];
//                        arr[j] = arr[j + 1];
//                        arr[j + 1] = tmp;
//                    }
//                }
//            }
//            for (i = 1; i < 6; i++)
//            {
//                sum += arr[i];
//            }
//            printf("%.2lf\n", sum / 5.0);
//            i = 0;
//            sum = 0;
//        }
//    }
//    return 0;
//}
