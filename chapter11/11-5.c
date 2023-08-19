//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long j = n>m ? m:n; // 最大公约数,假设n和m的较小值为最大公约数
//    long long k = 0; // 最小公倍数
//    while ((n % j) || (m % j))
//    {
//        j--;
//    }
//    k = (n * m) / j; // j * k == n * m
//    printf("%lld\n", (j + k));
//    return 0;
//}
//*/
//
//
//// 辗转相除法求最大公约数
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long tmp = 0;
//    long long max = 0; // 最大公约数
//    long long min = 0; // 最小公倍数
//    long long n2 = n;
//    long long m2 = m;
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    min = n2 * m2 / max;
//    printf("%lld\n", max + min);
//    return 0;
//}