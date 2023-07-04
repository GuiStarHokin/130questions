//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
///*
//int main()
//{
//    char operator = 0;
//    double op1 = 0.0;
//    double op2 = 0.0;
//    double result = 0.0;
//    scanf("%lf%c%lf", &op1, &operator, &op2);
//    if (operator == '+' || operator == '-' || operator == '*' || operator == '/')
//    {
//        if (operator == '/' && op2 == 0.0)
//        {
//            printf("Wrong!Division by zero!");
//            return 0;
//        }
//
//        if (operator == '+')
//        {
//            result = op1 + op2;
//        }
//        else if (operator == '-')
//        {
//            result = op1 - op2;
//        }
//        else if (operator == '*')
//        {
//            result = op1 * op2;
//        }
//        else if (operator == '/')
//        {
//            result = op1 / op2;
//        }
//        printf("%.4lf%c%.4lf=%.4lf", op1, operator, op2, result);
//    }
//    else
//    {
//        printf("Invalid operation!");
//    }
//    return 0;
//}
//*/
//
//int main()
//{
//    double n1 = 0.0;
//    double n2 = 0.0;
//    char op = 0;
//    double result = 0.0;
//    while (scanf("%lf%c%lf", &n1, &op, &n2) != EOF)
//    {
//        switch (op)
//        {
//        case '+':
//            result = n1 + n2;
//            printf("%.4lf%c%.4lf=%.4lf", n1, op, n2, result);
//            break;
//
//        case '-':
//            result = n1 - n2;
//            printf("%.4lf%c%.4lf=%.4lf", n1, op, n2, result);
//            break;
//
//        case '*':
//            result = n1 * n2;
//            printf("%.4lf%c%.4lf=%.4lf", n1, op, n2, result);
//            break;
//
//        case '/':
//            if (n2 == 0.0)
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//            else
//            {
//                result = n1 / n2;
//                printf("%.4lf%c%.4lf=%.4lf", n1, op, n2, result);
//            }
//            break;
//
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}