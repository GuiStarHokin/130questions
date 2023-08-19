//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* e1, const void* e2)
//{
//    return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    /*
//    for (i=0; i<n-1; i++)
//    {
//        int j = 0;
//        for (j=0; j<n-1-i; j++)
//        {
//            if (arr[j] < arr[j+1])
//            {
//                int tmp = 0;
//                tmp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = tmp;
//            }
//        }
//    }*/
//    qsort(arr, n, sizeof(int), cmp);
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//
//    // qsort
//
//
//    return 0;
//}