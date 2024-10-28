#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

ListNode *head = NULL;

void append(int x);
void prepend(int x);
void insertAt(int pos, int x);

void popBack();
void popFront();
void removeAt(int pos);

void display();

int main()
{
    printf("1. Append\n2. Prepend\n3.Insert At\n4. Remove Back\n5. Remove Front\n6. Remove at Index\n7. Display\nPress Ctrl + C to Exit\n");
    int control, x, n;
    while (scanf("%d", &control))
    {
        switch (control)
        {
        case 1:
            scanf("%d", &x);
            append(x);
            break;
        case 2:
            scanf("%d", &x);
            prepend(x);
            break;
        case 3:
            scanf("%d %d", &n, &x);
            insertAt(n, x);
            break;
        case 4:
            popBack();
            break;
        case 5:
            popFront();
            break;
        case 6:
            scanf("%d", &n);
            removeAt(n);
            break;
        case 7:
            display();
            break;
        default:
            break;
        }
    }
}

void append(int x)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->next = NULL;
    newNode->val = x;
    if (!head)
    {
        head = newNode;
    }
    else
    {
        ListNode *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }
}

void prepend(int x)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->next = head;
    newNode->val = x;
    head = newNode;
}

void insertAt(int pos, int x)
{
    ListNode *newNode = (ListNode *)malloc(sizeof(ListNode));
    newNode->val = x;
    ListNode *temp = head;
    if (pos == 0)
    {
        prepend(x);
        return;
    }
    while (--pos)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void popFront()
{
    if (head)
    {
        ListNode *temp = head;
        head = head->next;
        free(temp);
    }
}

void popBack()
{
    if (!head)
        return;

    ListNode *temp = head;
    if (!temp->next)
    {
        popFront();
        return;
    }
    while (temp->next->next)
        temp = temp->next;

    temp->next = NULL;
}

void removeAt(int pos)
{
    ListNode *temp = head;
    if (pos == 0)
    {
        popFront();
        return;
    }
    while (--pos)
    {
        temp = temp->next;
    }
    ListNode *remove = temp->next;
    temp->next = remove->next;
    free(remove);
}

void display()
{
    ListNode *temp = head;
    while (temp)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}