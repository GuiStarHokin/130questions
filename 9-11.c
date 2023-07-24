//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    int arr3[n + m];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//    int j = 0;
//    int k = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            arr3[k] = arr1[i];
//            k++;
//            i++;
//        }
//        else
//        {
//            arr3[k] = arr2[j];
//            k++;
//            j++;
//        }
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            arr3[k] = arr2[j];
//            k++;
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            arr3[k] = arr1[i];
//            k++;
//        }
//    }
//    for (k = 0; k < n + m; k++)
//    {
//        printf("%d ", arr3[k]);
//    }
//    return 0;
//}