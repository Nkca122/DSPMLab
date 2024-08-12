#include<stdio.h>
#include <stdlib.h>

void insert(int* arr, int* size, int index, int val){
    int s = *size - 1;
    for(int i = s ; i >= index; i--){
        *(arr + i + 1) = *(arr + i);
    }

    *(arr + index) = val;
    *(size) = *(size) + 1;
    return;

}

void delete(int* arr, int* size, int index){
int s = index + 1;
    for(int i = s; i < *size; i++){
        *(arr + i - 1) = *(arr + i);

    }
    *(size) = *(size) - 1;
    return;
}

int search(int* arr, int size, int val){
    for(int i = 0; i < size; i++){
        if(*(arr + i) == val){
            return i;
        }
    }

    return -1;
}

int main(){
    int n = 5; 
    int size = 0;
    int* arr = (int*)calloc(n, sizeof(int));
    
    for(int i = 0; i < n; i++){
        insert(arr, &size, i, i+1);
    }

    for(int i = 0; i < size; i++){
        printf("%d ", *(arr+i));
    }

    printf("\n%d\n", search(arr, size, 4));

    delete(arr, &size, 0);

    for(int i = 0; i < size; i++){
        printf("%d ", *(arr+i));
    }




    


}