//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long j = n>m ? m:n; // ���Լ��,����n��m�Ľ�СֵΪ���Լ��
//    long long k = 0; // ��С������
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
//// շת����������Լ��
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long tmp = 0;
//    long long max = 0; // ���Լ��
//    long long min = 0; // ��С������
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