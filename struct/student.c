#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 100

typedef enum course
{
    CSE,
    ECE,
    EIE,
    EEE,
    ME,
    PE
} course;
char courses[6][MAX_SIZE] = {"CSE", "ECE", "EIE", "EEE", "ME", "PE"};
typedef struct Student
{
    char name[MAX_SIZE];
    int _id;
    course branch;
} Student;

int main()
{
    printf("1. C to Create\n2. R to display\n3. U to Update\n4. D to delete\na student\nPress Ctrl + C to Exit the Programm\n");
    char control;
    Student students[MAX_SIZE];
    int n = 0;
    while (scanf("%c", &control))
    {
        switch (control)
        {
        case 'c':
            Student newStudent;
            printf("Enter the name for the student: ");
            scanf("\n");
            fgets(newStudent.name, MAX_SIZE, stdin);
            printf("Enter the branch's id for the student: ");
            int branch;
            scanf("%d", &branch);
            newStudent.branch = branch;
            printf("Enter the id for the student: ");
            scanf("%d", &newStudent._id);
            students[n++] = newStudent;
            break;
        case 'r':
            printf("LIST OF ALL STUDENTS:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%d", students[i]._id);
                printf("\t%s", courses[students[i].branch]);
                printf("\t%s", students[i].name);
            }
            break;
        case 'u':
            printf("Enter the id of the student to be updated: ");
            int id, i;
            scanf("%d", &id);
            for (i = 0; i < n; i++)
            {
                if (students[i]._id == id)
                {
                    printf("%d", students[i]._id);
                    printf("\t%s", courses[students[i].branch]);
                    printf("\t%s", students[i].name);
                    Student newStudent;
                    printf("Enter the name for the student: ");
                    scanf("\n");
                    fgets(newStudent.name, MAX_SIZE, stdin);
                    printf("Enter the branch's id for the student: ");
                    int branch;
                    scanf("%d", &branch);
                    newStudent.branch = branch;
                    printf("Enter the id for the student: ");
                    scanf("%d", &newStudent._id);
                    students[i] = newStudent;
                    break;
                }
            }
            if (i == n) printf("Not a Valid id \n");
            break;
        case 'd':
            printf("Enter the id of the student to be deleted: ");
            int ct, Id, flag = 0;
            scanf("%d", &Id);
            for(ct = 0; ct < n; ct++){
                if(students[ct]._id == Id){
                    for(int j = ct; j < n; j++){
                        students[j] = students[j+1];
                    }
                    n--;
                flag = 1;
                break;
                }
            }
            if(!flag) printf("Not a valid id \n");
            break;
        default:
            break;
        }
    }
}