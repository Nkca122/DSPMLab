#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node* LChild;
    int val;
    struct Node* RChild;
} Node;

Node* root = NULL;

void inOrder(Node* root){
    if(!root) return;
    inOrder(root->LChild);
    printf("%d ", root->val);
    inOrder(root->RChild);
}

void preOrder(Node* root){
    if(!root) return;
    printf("%d ", root->val);
    preOrder(root->LChild);
    preOrder(root->RChild);
}

void postOrder(Node* root){
    if(!root) return;
    postOrder(root->LChild);
    postOrder(root->RChild);
    printf("%d ", root->val);
} 

int main(){
    int n, x; scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->val = x; newNode->LChild = NULL; newNode->RChild = NULL;
        if(!root) {
            root = newNode;
        } else {
            Node* temp = root; 
            Node* t;
            while(temp){
                t = temp;
                if(x < temp->val) {
                    temp = temp->LChild;
                } else if (x > temp->val){
                    temp = temp->RChild;
                }
            }

            if(!t) {
                t = newNode;
            } else if(t->val < x) {
                t->RChild = newNode;
            } else if(t->val > x) {
                t->LChild = newNode;
            }
        }
    }
    inOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");
    postOrder(root);
}