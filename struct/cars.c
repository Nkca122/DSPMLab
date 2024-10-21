#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

typedef enum brand {BMW, MARUTI, HONDA} brand;
char brands[3][MAX_SIZE] = {"BMW", "MARUTI", "HONDA"};
typedef struct Cars {
    char name[MAX_SIZE];
    brand brand;
} Car;

int main(){
    int n, ncpy, i = 0; scanf("%d", &n); ncpy = n;
    Car cars[n];
    while(n--){
        Car* newCar = (Car*)malloc(sizeof(Car));
        printf("Enter Model ID 0 to 2: "); int brand; scanf("%d", &brand); newCar->brand = brand;
        printf("Enter the name of the Model: "); scanf("\n"); fgets(newCar->name, MAX_SIZE, stdin);
        printf("--------------------------------------------------------------\n");
        cars[i++] = *newCar;
    }

    for(int i = 0; i < ncpy; i++){
        printf("%s\t", brands[cars[i].brand]);
        printf("%s", cars[i].name);
    }

}