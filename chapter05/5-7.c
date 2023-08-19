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
//        getchar();//吸收\n
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
//    // 在%c的前面加上空格，会消化掉前面所有的空白字符，然后读取一个字符
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
//        getchar(); // 处理\n
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
//    //在%c的后面给一个'\n',其实在输入的时候就会消化掉这个\n字符
//    //不会为下次留下空白字符的隐患
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
//        getchar(); // 处理\n
//    }
//    return 0;
//}
//
