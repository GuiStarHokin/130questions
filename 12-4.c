#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
// �������
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[1000] = {0};
    int i = 0;
    // ����n����
    for (i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // ����-ð������
    // �Ƚ�n-1��
    for (i=0; i<n-1; i++)
    {
        // ÿ�˱Ƚ�n-1-i��
        int j = 0;
        for (j=0; j<n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int tmp = 0;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    // ȥ��
    // n��Ԫ�������Ƚ�Ҫ�Ƚ�n-1��
    for (i=0; i<n-1; i++)
    {
        if (arr[i] == arr[i+1])
        {
            int j = 0;
            for (j=i; j<n-1; j++)
            {
                arr[j] = arr[j+1];
            }
            n--;
            i--;
        }
    }
    // ��ӡ
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
*/


int main()
{
    int n = 0;
    int arr[1001] = { 0 };
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int j = 0;
        scanf("%d", &j);
        arr[j] = j;
    }
    // ��Ϊ��Ӧ�±����Ӧ������ȹʲ�������

    for (i = 0; i < 1001; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}