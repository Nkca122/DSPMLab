#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int val;
    struct ListNode* next;
} ListNode;

void display(ListNode* head);

int main(){
    ListNode* head = NULL;
    int n, x; scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
        newNode->val = x; newNode->next = NULL;
            if(!head){
                head = newNode;
            } else {
                ListNode* temp = head;
                while(temp){
                    if(temp->val > x){
                        break;
                    }
                    temp = temp->next;
                }
                if(temp != head){
                     ListNode* t = head;
                    while(t->next != temp) t = t->next;
                    newNode->next = temp;
                    t->next = newNode;
                } else {
                    newNode->next = head;
                    head = newNode;
                }
               
            }
        display(head);
    }
}

void display(ListNode* head){
    while(head){
        printf("%d\t", head->val);
        head = head->next;
    }
    printf("\n");
}