#include<stdio.h>
void callByValue(int n);
void callByReference(int* n);
int main(){
    int n; int* n_ptr = &n;
    scanf("%d", n_ptr);
    printf("Before call by \n ->value:%d\n ->reference:%d\n", n, *n_ptr);
        callByValue(n);
    printf("After call by \n ->value:%d\n", n);
        callByReference(n_ptr);
    printf("After call by\n ->reference:%d\n", n);
    return 0;
}

void callByValue(int n){
    n += 1;
}

void callByReference(int* n){
    *(n) += 1;
}
