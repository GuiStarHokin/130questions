#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int n = 0;
    int arr[100] = { 0 };
    int i = 0;
    int count = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 2; i <= n; i++)
        {
            arr[i] = i;
        }
        for (i = 2; i <= n; i++)
        {
            int j = 0;
            for (j = i + 1; j <= n; j++)
            {
                if (arr[j] % i == 0)
                {
                    arr[j] = 0;
                }
            }
        }
        for (i = 2; i <= n; i++)
        {
            if (arr[i] == 0)
            {
                count++;
            }
        }
        for (i = 2; i <= n; i++)
        {
            if (arr[i] != 0)
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
        printf("%d\n", count);

    }
    return 0;
}