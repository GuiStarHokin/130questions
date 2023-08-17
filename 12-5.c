#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    int n = 0;
    scanf("%d", &n);
    struct Node* head = NULL;
    struct Node* tail = NULL;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        int num = 0;
        scanf("%d", &num);
        struct Node* node = (struct Node*)malloc(sizeof(struct Node));
        node->data = num;
        node->next = NULL;
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
    }

    int d = 0;
    scanf("%d", &d);
    struct Node* cur = head;
    struct Node* prev = NULL;
    while (cur)
    {
        if (cur->data == d)
        {
            struct Node* pd = cur;
            if (cur == head)
            {
                head = head->next;
                cur = head;
            }
            else
            {
                prev->next = cur->next;
                cur = cur->next;
            }
            free(pd);
            pd = NULL;
            n--;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    printf("%d\n", n);
    cur = head;
    while (cur)
    {
        printf("%d ", cur->data);
        cur = cur->next;
    }
    cur = head;
    struct Node* del = NULL;
    while (cur)
    {
        del = cur;
        cur = cur->next;
        free(del);

    }
    return 0;
}