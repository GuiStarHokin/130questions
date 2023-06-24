#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    double score = 0;
    int i = 0;
    double sum = 0;
    for (i = 0; i < 3; i++)
    {
        scanf("%lf", &score);
        sum += score;
    }
    printf("%.2lf %.2lf", sum, sum / 3.0);
    return 0;
}