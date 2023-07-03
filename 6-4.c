//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    double a = 0.0;
//    double b = 0.0;
//    double c = 0.0;
//    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//    {
//        if (a == 0.0)
//        {
//            printf("Not quadratic equation\n");
//        }
//        else
//        {
//            double x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
//            double x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
//            double dected = pow(b, 2) - (4 * a * c);
//            //double max = x2 >= x1 ? x2 : x1;
//            //double min = x2 <= x1 ? x2 : x1;
//            if (dected > 0.0)
//            {
//                printf("x1=%.2lf;x2=%.2lf", x1, x2);
//            }
//            else if (dected < 0.0)
//            {
//                double real = -b / (2 * a);
//                double image = sqrt(-dected) / (2 * a);
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, image, real, image);
//            }
//            else
//            {
//                if (x1 == -0.00)
//                {
//                    x1 = x2 = 0.00;
//                }
//                printf("x1=x2=%.2lf\n", x1);
//            }
//        }
//    }
//    return 0;
//}