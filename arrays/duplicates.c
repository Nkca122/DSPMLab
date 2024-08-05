#include <stdio.h>

int main(){
    int size; 
    scanf("%d", &size); //Size of array

    printf("Enter the numbers for the array: \n");

    int arr[size]; //Array
        for(int i = 0; i < size; i++){
            scanf("%d", arr + i);
        }

    printf("The duplicates are: \n");
    
    //Printing duplicates
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                arr[j] = __INT16_MAX__;
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}