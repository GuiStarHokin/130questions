//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int weight = 0;
//    int hight = 0;
//    while (scanf("%d %d", &weight, &hight) != EOF)
//    {
//        double bmi = weight / pow(hight / 100.0, 2);
//        if (bmi < 18.5)
//        {
//            printf("Underweight\n");
//        }
//        //bmi到这里一定大于或等于18.5了
//        else if (bmi <= 23.9)
//        {
//            printf("Normal\n");
//        }
//        else if (bmi <= 27.9)
//        {
//            printf("Overweight\n");
//        }
//        else
//        {
//            printf("Obese\n");
//        }
//    }
//    return 0;
//}