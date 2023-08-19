//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//int main()
//{
//    int time_h = 0;
//    int time_m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &time_h, &time_m, &k);
//    time_h  = (((time_m + k) / 60) + time_h) % 24;
//    time_m = (time_m + k) % 60;
//    printf("%02d:%02d\n",time_h, time_m);
//    return 0;
//}
//*/
//
//int main()
//{
//    int time_h = 0;
//    int time_m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &time_h, &time_m, &k);
//    time_h += k / 60;
//    time_m += k % 60;
//    if (time_m >= 60)
//    {
//        time_h += time_m / 60;
//        time_m %= 60;
//    }
//    if (time_h >= 24)
//    {
//        time_h %= 24;
//    }
//    printf("%02d:%02d\n", time_h, time_m);
//    return 0;
//}