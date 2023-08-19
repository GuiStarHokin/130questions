//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}