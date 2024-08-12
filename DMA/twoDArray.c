#include <stdio.h>
#include <stdlib.h>

int* twoDArray(int m, int n){
    int* arr = (int*)calloc(m, sizeof(int) * n);
    for(int i = 0; i < m; i++){
        *(arr + i) = (int*)calloc(1, sizeof(int) * n);
    }

    return arr;
}

int main(){

    int* arr = twoDArray(3, 4);
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", arr + 3*i + j);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", *(arr + 3*i + j));
        }
    }



}