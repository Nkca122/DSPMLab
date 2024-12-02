// Implementing array as an ADT
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 100

typedef struct arr
{
    int max_size;
    int size;
    int *base_ptr; // -> Points to the base address of our array
} arr;

arr* createArray(int max_size, int size)
{
    int* newArray = (int*)calloc(sizeof(int), max_size);
    arr* newADT = (arr*)malloc(sizeof(arr));

    newADT->base_ptr = newArray;
    newADT->max_size = max_size;
    newADT->size = size;


    return newADT;
}

void show(arr* a){
    for(int i = 0; i < a->size; i++){
        printf("%d ", *(a->base_ptr + i));
    }
    printf("\n");
}

void push(arr* a, int val){
    if(a->max_size > a->size){
        a->base_ptr[a->size] = val;
        a->size++;
    }
}
int main()
{
    arr* newArr = createArray(5, 0);
    push(newArr, 2); push(newArr, 2);
    show(newArr);
    return 0;
}