#include <stdio.h>
void inputArray(int size, int* arr);

int main(){

}

void inputArray(int size, int* arr){
    printf("Enter the numbers for the array: \n");

    int arr[size]; //Array
        for(int i = 0; i < size; i++){
            scanf("%d", arr + i);
        }
}