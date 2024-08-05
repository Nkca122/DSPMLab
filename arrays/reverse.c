#include <stdio.h>
int main(){
    int size; 
    scanf("%d", &size); //Size of array

    printf("Enter the numbers for the array: \n");

    int arr[size]; //Array
        for(int i = 0; i < size; i++){
            scanf("%d", arr + i);
        }
    
    //Reversing

        for(int i = 0; i < size/2; i++){ //Only for half the array size
            int temp = arr[i];
            arr[i] = arr[size - i - 1];  //swapping arr[upper bound - current index], arr[current index]
            arr[size - i - 1] = temp;
        }

    //Output
        for(int i = 0; i < size; i++){
            printf("%d ", arr[i]);
        }

    printf("\n");
    return 0;

}