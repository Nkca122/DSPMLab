#include <stdio.h>
void bubbleSort(int* arr, int n);
void inputArray(int* arr, int n);
void outputArray(int* arr, int n);
int main(){
    //Initializing array
        int n; printf("Enter the size of the array: "); scanf("%d", &n);
        int arr[n];

    //inputting array
        printf("Enter the elements of the array: \n");
        inputArray(arr, n);
        bubbleSort(arr, n);

    //Output
        outputArray(arr, n);

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

void bubbleSort(int* arr, int n){
    int ct = 0;
    while(ct < n){
        for(int i = ct; i < n-1; i++){
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        ct++;
    }
}