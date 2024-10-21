#include <stdio.h>
#include <stdlib.h>
typedef struct ListNode{
    int val;
    struct ListNode* next;
} ListNode;

void display(ListNode* head);

int main(){
    ListNode* head = NULL; int n, x; scanf("%d", &n);
    while(n--){
        scanf("%d", &x); 
        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
        newNode->next = NULL; newNode->val = x;
            if(!head){
                head = newNode;
            } else {
                ListNode* temp = head;
                while(temp->next){
                    temp = temp->next;
                }
                temp->next = newNode;
            }
    }

    int size = 0;
    ListNode* temp = head;
    while(temp){
        temp = temp->next; ++size;
    }

    for(int i = --size; i > 0; i--){
        ListNode* temp = head; int e = i;
        while(e--){
            int curVal = temp->val;
            temp->val = temp->next->val;
            temp->next->val = curVal;
            temp = temp->next;
        }
    }

    display(head);
}

void display(ListNode* head){
    while(head){
        printf("%d\t", head->val);
        head = head->next;
    }
    printf("\n");
}