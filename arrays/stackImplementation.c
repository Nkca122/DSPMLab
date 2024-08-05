#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    int capacity;
    int size;
    int* stack;
};

struct stack makeStack(int capacity);
void push(struct stack* S, int item);
void pop(struct stack* S);



int main(){

    struct stack S = makeStack(5);
    push(&S, 1);
    push(&S, 2);
    push(&S, 3);
    push(&S, 4);
    push(&S, 5);
    push(&S, 6);

    for(int i = 0; i < S.top; i++){
        printf("%d ", S.stack[i]);
    }

    printf("\n");
    pop(&S);
    pop(&S);
    pop(&S);
    pop(&S);
    pop(&S);
    pop(&S);

    for(int i = 0; i < S.top; i++){
        printf("%d ", S.stack[i]);
    }


}

struct stack makeStack(int capacity){
    struct stack newStack ;
    // Initializin new stack
        newStack.top = 0;
        newStack.capacity = capacity;
        newStack.size = 0;
    newStack.stack = (int*)calloc(capacity, sizeof(int));

    return newStack;
}

void push(struct stack* S, int item){
    if(S->top < (S->capacity)){
        S->stack[S->top] = item;
            S->top ++;
            S->size ++;
    } else {
        printf("Overflow\n");
    }
}

void pop(struct stack* S){
    if(S->top > 0){
        S->top -= 1;
        S->size -= 1;
    } else {
        printf("Underflow\n");
    }
}