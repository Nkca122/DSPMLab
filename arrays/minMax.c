#include <stdio.h>
#include<stdlib.h>

void inputArray(int size, int arr[]);

struct minMax{
    int min;
    int max;
};

int main(){

    //Array declaration
        int size;
            printf("Enter the size of the array: ");
            scanf("%d", &size);
        int arr[size];
            inputArray(size, arr);

    //res pointer
        struct minMax* res = (struct minMax*)calloc(1, sizeof(struct minMax));

    //Calculating min - max
        res->max = arr[0];
        res->min = arr[0];

        for(int i = 1; i < size; i++){
            if(arr[i] > res->max){
                res->max = arr[i];
            }
            if(arr[i] < res->min){
                res->min = arr[i];
            }
        }

    //Output
        printf("Maximum number in the array: %d\nMinimum number in the array: %d\n", res->max, res->min);

    free(res);
    return 0;
}

void inputArray(int size, int arr[]){
    printf("Enter the numbers for the array: \n");
    //Array
        for(int i = 0; i < size; i++){
            scanf("%d", arr + i);
        }
}