//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <string.h>
//
///*
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//
//        if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')
//        || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//        getchar();//����\n
//    }
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')
//        || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//        getchar();
//    }
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    char ch = 0;
//    // ��%c��ǰ����Ͽո񣬻�������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
//    while (scanf(" %c", &ch) != EOF)
//    {
//        if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')
//        || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//        getchar();
//    }
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    int ch = 0;
//    char vowel[] = "AaEeIiOoUu";
//    int sz = strlen(vowel);
//    while ((ch = getchar()) != EOF)
//    {
//        int i = 0;
//        for (i=0; i<sz; i++)
//        {
//            if (vowel[i] == ch)
//            {
//                printf("Vowel\n");
//                break;
//            }
//        }
//        getchar(); // ����\n
//
//        if (i == 10)
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}
//*/
//
///*
//int main()
//{
//    char ch = 0;
//    //��%c�ĺ����һ��'\n',��ʵ�������ʱ��ͻ����������\n�ַ�
//    //����Ϊ�´����¿հ��ַ�������
//    while (scanf("%c\n", &ch) != EOF)
//    {
//        if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')
//        || (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//    }
//    return 0;
//}
//*/
//
//
//int main()
//{
//    int ch = 0;
//    char vowel[] = "AaEeIiOoUu";
//    while ((ch = getchar()) != EOF)
//    {
//        char* result = strchr(vowel, ch);
//        if (result == NULL)
//        {
//            printf("Consonant\n");
//        }
//        else
//        {
//            printf("Vowel\n");
//        }
//        getchar(); // ����\n
//    }
//    return 0;
//}
//
