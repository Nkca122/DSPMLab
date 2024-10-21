#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef struct Movie
{
    char name[MAX_SIZE];
    char review[MAX_SIZE];
    int rating;
} Movie;

int main()
{
    printf("1. C to Create\n2. R to display\n3. U to Update\n4. D to delete\na movie review\nPress Ctrl + C to Exit the Programm\n");
    char control;
    Movie movies[MAX_SIZE];
    int n = 0;
    while (scanf("%c", &control))
    {
        switch (control)
        {
            case 'c':
                Movie* newMovie = (Movie*)malloc(sizeof(Movie));
                printf("Enter the name of the movie: "); scanf("\n"); fgets(newMovie->name, MAX_SIZE, stdin);
                printf("Enter the rating (1 - 5) for the movie: "); scanf("%d", &newMovie->rating);
                printf("Enter a review for the movie: "); scanf("\n"); fgets(newMovie->review, MAX_SIZE, stdin);

                movies[n++] = *newMovie;
                break;
            case 'r':
                for(int i = 0; i < n; i++){
                    printf("------------------------------\n");
                    printf("%s", movies[i].name);
                    printf("%d\n", movies[i].rating);
                    printf("%s", movies[i].review);
                }
                break;
            case 'u':
                printf("Enter the name of the movie to be updated: ");
                char name[MAX_SIZE]; scanf("\n"); fgets(name, MAX_SIZE, stdin); int flag = 0;

                for(int i = 0; i < n; i++){
                    if(strcmp(name, movies[i].name) == 0){
                        Movie* newMovie = (Movie*)malloc(sizeof(Movie));
                        printf("Enter the name of the movie: "); scanf("\n"); fgets(newMovie->name, MAX_SIZE, stdin);
                        printf("Enter the rating (1 - 5) for the movie: "); scanf("%d", &newMovie->rating);
                        printf("Enter a review for the movie: "); scanf("\n"); fgets(newMovie->review, MAX_SIZE, stdin);

                        movies[i] = *newMovie;
                        flag = 1; break;
                    }
                }

                if(!flag) printf("No Review of this movie exists\n");
                break;
            case 'd':
                printf("Enter the name of the movie to be deleted: ");
                char nm[MAX_SIZE]; scanf("\n"); fgets(nm, MAX_SIZE, stdin); int chk = 0;

                for(int i = 0; i < n; i++){
                    if(strcmp(name, movies[i].name) == 0){
                        for(int j = i; j < n; j++){
                            movies[j] = movies[j+1];
                        }
                        n--;
                    }
                }
            default:
                break;
        }
    }
}