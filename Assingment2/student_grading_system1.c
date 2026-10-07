#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int numberOfStudents;
    char regNo[30];
    char studName[50];
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
        if(marks >= 70){
            grade = 'A';
        }
        else if(marks >= 60){
            grade = 'B';
        }
        else if(marks >= 50){
            grade = 'C';
        }
        else if(marks >= 40){
            grade = 'D';
        }
        else {
            grade = 'F';
        }

        printf("\n----------------------------------------------\n");
        printf("             STUDENT INFORMATION\n");
        printf("----------------------------------------------\n");
        printf("Registration No: %s \n",regNo);
        printf("Name: %s \n",studName);
        printf("Marks: %.2f \n\n",marks);
        printf("Grade: %c \n",grade);
        printf("----------------------------------------------\n\n");

        if(marks >= 40){
            printf("THE STUDENT PASSED.\n\n");
        }
        else{
            printf("THE STUDENT FAILED.\n\n");
        }
    }
    return 0;
}
