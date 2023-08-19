//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    char game[3][3] = { 0 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 3; j++)
//        {
//            scanf(" %c ", &game[i][j]);
//        }
//    }
//    char flag = 0;
//    for (i = 0; i < 3; i++)
//    {
//        // 判断每一行三个是否相等
//        if (game[i][0] == game[i][1] && game[i][1] == game[i][2] && game[i][0] != 'O')
//        {
//            flag = game[i][0];
//            break;
//        }
//        // 判断每一列三个是否相等
//        if (game[0][i] == game[1][i] && game[1][i] == game[2][i] && game[0][i] != 'O')
//        {
//            flag = game[0][i];
//            break;
//        }
//    }
//    // 判断对角线
//    if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && game[0][0] != 'O')
//    {
//        flag = game[0][0];
//    }
//    if (game[0][2] == game[1][1] && game[1][1] == game[2][0] && game[0][2] != 'O')
//    {
//        flag = game[0][2];
//    }
//    if (flag == 'K')
//    {
//        printf("KiKi wins!\n");
//    }
//    else if (flag == 'B')
//    {
//        printf("BoBo wins!");
//    }
//    else
//    {
//        printf("No winner!\n");
//    }
//    return 0;
//}