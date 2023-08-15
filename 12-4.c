#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// 暴力求解
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[1000] = {0};
    int i = 0;
    // 输入n个数
    for (i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // 排序-冒泡排序
    // 比较n-1趟
    for (i=0; i<n-1; i++)
    {
        // 每趟比较n-1-i对
        int j = 0;
        for (j=0; j<n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = 0;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    // 去重
    // n个元素两两比较要比较n-1对
    for (i=0; i<n-1; i++)
    {
        if (arr[i] == arr[i+1])
        {
            int j = 0;
            for (j=i; j<n-1; j++)
            {
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }
    // 打印
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
*/


int main()
{
    int n = 0;
    int arr[1001] = { 0 };
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        scanf("%d", &j);
        arr[j] = j;
    }
    // 因为对应下标与对应数字相等故不用排序

    for (i = 0; i < 1001; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}