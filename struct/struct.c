#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node* next;
} Node;

void insert(Node** listptr, int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->val = val;
    newNode->next = NULL;
    if(*listptr){
        Node* temp = *listptr;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = newNode;
    } else {
        *listptr = newNode;
    }
}



int main(){
    Node* listptr = NULL;
    int n, val;
    scanf("%d", &n);
    for(int i = 0 ; i < n; i ++){
        scanf("%d", &val);
        insert(&listptr, val);
    }

    while(listptr){
        printf("%d ", listptr->val);
        listptr = listptr->next;
    }
}

