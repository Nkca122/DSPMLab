#include <stdio.h>
#include <stdlib.h>


int* copyArray(int arr[], int n){
    int* brr = calloc(n, sizeof(int));
    for(int i = 0; i < n; i++){
        *(brr + i) = arr[i];
    }

    return brr;
}
int main(){
    int arr[] = {1, 2, 3 ,45};
    int* arrCpy = copyArray(arr, 4);

    for(int i = 0; i < 4; i++){
        printf("%d ", arrCpy[i]);
    }

    return 0;
}