//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
///*
//int main()
//{
//    char arr[8000] = {0};
//    scanf("%s", arr);
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    int i = 0;
//    while (arr[i])
//    {
//        if (arr[i] == 'C')
//        {
//            c++;
//        }
//        else if (arr[i] == 'H')
//        {
//            ch += c;
//        }
//        else if (arr[i] == 'N')
//        {
//            chn += ch;
//        }
//        i++;
//    }
//    printf("%lld\n", chn);
//    return 0;
//}
//*/
//
//int main()
//{
//    char str[8000] = { 0 };
//    scanf("%s", str);
//    char* p = str;
//    long long c = 0;
//    long long ch = 0;
//    long long chn = 0;
//    while (*p)
//    {
//        if (*p == 'C')
//        {
//            c++;
//        }
//        else if (*p == 'H')
//        {
//            ch += c;
//        }
//        else if (*p == 'N')
//        {
//            chn += ch;
//        }
//        p++;
//    }
//    printf("%lld\n", chn);
//    return 0;
//}