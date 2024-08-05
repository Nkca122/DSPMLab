#include<stdio.h>
void inputArray(int* arr, int n);
void outputArray(int* arr, int n);
int main(){
    //Initializing array
        int n; printf("Enter the size of the array: "); scanf("%d", &n);
        int arr[n];

    //inputting array
        printf("Enter the elements of the array: \n");
        inputArray(arr, n);

    //Output
        outputArray(arr, n);
    
    return 0;
}

void inputArray(int* arr, int n){
    for(int i = 0; i < n; i++){
        scanf("%d", (arr+i));
    }
}

void outputArray(int* arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}
