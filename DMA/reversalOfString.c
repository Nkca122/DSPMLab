#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char* my_string = (char*)calloc(6, sizeof(char));

    for(int i = 0; i < 6; i++){
        *(my_string+ i) = getchar();
    }


    for(int i = 0; i < strlen(my_string)/2; i++){
        char temp = *(my_string + i);
        *(my_string + i) = *(my_string + 5 - i);
        *(my_string + 5 - i) = temp;
    }

    for(int i = 0; i <6; i++){
        printf("%c", *(my_string + i));
    }


}