#include <stdio.h>
#include <stdlib.h>

int main() {
    // Demonstrating malloc
    int *ptr1;
    int n = 5; // size of array

    // malloc allocates memory for 5 integers
    ptr1 = (int *)malloc(n * sizeof(int));

    if (ptr1 == NULL) {
        printf("Memory not allocated using malloc.\n");
        exit(0); // Exit if memory allocation fails
    } else {
        printf("Memory successfully allocated using malloc.\n");

        // Memory is not initialized, contains garbage values
        for (int i = 0; i < n; i++) {
            printf("ptr1[%d] = %d (Garbage value)\n", i, ptr1[i]);
        }

        // Assign values to allocated memory
        for (int i = 0; i < n; i++) {
            ptr1[i] = i + 1;
        }

        printf("After assigning values using malloc:\n");
        for (int i = 0; i < n; i++) {
            printf("ptr1[%d] = %d\n", i, ptr1[i]);
        }
    }

    // Demonstrating calloc
    int *ptr2;

    // calloc allocates memory for 5 integers and initializes them to 0
    ptr2 = (int *)calloc(n, sizeof(int));

    if (ptr2 == NULL) {
        printf("Memory not allocated using calloc.\n");
        exit(0); // Exit if memory allocation fails
    } else {
        printf("Memory successfully allocated using calloc.\n");

        // Memory is initialized to zero
        for (int i = 0; i < n; i++) {
            printf("ptr2[%d] = %d\n", i, ptr2[i]);
        }

        // Assign values to allocated memory
        for (int i = 0; i < n; i++) {
            ptr2[i] = (i + 1) * 2;
        }

        printf("After assigning values using calloc:\n");
        for (int i = 0; i < n; i++) {
            printf("ptr2[%d] = %d\n", i, ptr2[i]);
        }
    }

    // Freeing allocated memory using free()
    free(ptr1);
    free(ptr2);

    printf("Memory has been successfully freed.\n");

    return 0;
}
