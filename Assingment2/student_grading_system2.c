#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int numberOfStudents;
    char regNo[50];
    char studName[100];
    float marks;
    char grade;
    printf("\nEnter the number of students: ");
    scanf("%d",&numberOfStudents);
    getchar();

    for(int index = 0;index < numberOfStudents; ++index){
        printf("\n      STUDENT %d \n",index + 1);
        printf("STUDENT NAME: ");
        fgets(studName,sizeof(studName),stdin);
        printf("REGISTRATION NUMBER: ");
        fgets(regNo,sizeof(regNo),stdin);
        printf("MARKS: ");
        scanf("%f",&marks);
        getchar();

        switch ((int)marks / 10) {
            case 10:
            case 9:
            case 8:
            case 7:
                grade = 'A';
                break;

            case 6:
                grade = 'B';
                break;

            case 5:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            default:
                grade = 'F';
                break;
        }

        printf("\n----------------------------------------------\n");
        printf("               STUDENT INFORMATION\n");
        printf("----------------------------------------------\n");
        printf("Registration No: %s \n",regNo);
        printf("Name: %s \n",studName);
        printf("Marks: %.2f \n\n",marks);
        printf("Grade: %c \n",grade);
        printf("----------------------------------------------\n\n");

        switch ((int)(marks >= 40)) {
            case 1:
                printf("THE STUDENT PASSED.\n\n");
                break;

            case 0:
                printf("THE STUDENT FAILED.\n\n");
                break;
        }
    }
    return 0;
}
