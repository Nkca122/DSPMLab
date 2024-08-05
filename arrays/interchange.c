#include <stdio.h>
void inputArray(int size, int* arr);

int main(){
//Taking sizes from the user
    int size;
    printf("Enter the size of the two arrays: ");
    scanf("%d",&size);

//Initializing Arrays
    int arr[size], brr[size];
//Taking arrays from the user
    inputArray(size, arr);
    inputArray(size, brr);
//Interchanging
    for(int i = 0; i < size; i++){
        int temp = arr[i];
        arr[i] = brr[i];
        brr[i] = temp;
    }
//Output
    printf("The first array: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("The second array: \n");
    for(int i = 0; i < size; i++){
        printf("%d ", brr[i]);
    }
    printf("\n");
    return 0;
}

void inputArray(int size, int* arr){
    printf("Enter the numbers for the array: \n");
        for(int i = 0; i < size; i++){
            scanf("%d", arr + i);
        }
}