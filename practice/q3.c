#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; scanf("%d", &n);
    float* arr = (float*)calloc(n, sizeof(float));
    for(int i = 0; i < n; i++){
        arr[i] = rand() % 11; //To generate numbers from 0 to 10
    }

    for(int i = n-1; i > 0; i--){
        for(int j = i; j >= 0; j--){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i = 0; i < n; i ++){
        printf("%f\t", arr[i]);
    }
    printf("\n");
    return 0;

}