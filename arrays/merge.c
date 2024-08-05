#include <stdio.h>
void inputArray(int size, int* arr);

int main(){
//Taking sizes from the user
    int size1, size2;
    printf("Enter the sizes of the two arrays: ");
    scanf("%d%d",&size1, &size2);

//Initializing Arrays
    int arr[size1], brr[size2], crr[size1 + size2];
//Taking arrays from the user
    inputArray(size1, arr);
    inputArray(size2, brr);
//Merging
    for(int i = 0; i < size1; i++){
        crr[i] = arr[i];
    }

    for(int i = 0; i < size2; i++){
        crr[size1 + i] = brr[i];
    }
//Output
    for(int i = 0; i < size1 + size2; i++){
        printf("%d ", crr[i]);
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