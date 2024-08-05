#include <stdio.h>
int main(){

    //Inputing a number from the user
        int n; int* n_ptr = &n;
        printf("Enter a number: ");
        scanf("%d", n_ptr);

    //Printing the table
    printf("The table of %d is: \n", *(n_ptr));
    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", (*n_ptr), i, (*n_ptr)*i);
    }

    return 0;




}