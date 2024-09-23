#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

typedef struct map {
    char name[MAX_SIZE];
    int val;
} feature;

typedef struct Phone{
    char Model[MAX_SIZE];
    int _id;
    int num;
    feature features[MAX_SIZE];
} Phone;

int main(){
    int N; scanf("%d", &N);
    N = N < MAX_SIZE ? N : MAX_SIZE;
    Phone phones[N];
    for(int ct = 0; ct < N; ct++){
        printf("----------------------------------------------\n");
        Phone newPhone;
        printf("Enter Model Name: "); scanf("\n"); fgets(newPhone.Model, MAX_SIZE, stdin);
        printf("Enter model _id: "); scanf("%d", &newPhone._id);

        printf("Enter Number of features: ");
        int num; scanf("%d", &num);
        num = num < MAX_SIZE ? num : MAX_SIZE;

        newPhone.num = num;

        for(int i = 0; i < num; i++){
            feature newFeature;
            printf("Enter feature %d 's name: ", i + 1); scanf("\n"); fgets(newFeature.name, MAX_SIZE, stdin);
            printf("Enter feature value: "); scanf("%d", &newFeature.val);

            newPhone.features[i] = newFeature;
        }

        phones[ct] = newPhone;
    }

    for(int i = 0; i < N; i++){
        printf("----------------------------------------------\n");
        Phone phone = phones[i];
        printf("Model: %s _id: %d\n", phone.Model, phone._id);
        printf("FEATURES:\n");
        for(int i = 0; i < phone.num; i++){
            feature f = phone.features[i];
            printf("%s: %d\n", f.name, f.val);
        }
    }

    printf("\n");
    return 0;



}