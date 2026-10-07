

#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1;
    int num2;

    int addition;
    int subtraction;
    int multiplication;
    float division;
    int modulus;

    printf("\nEnter the first number (Int): ");
    scanf("%d",&num1);
    printf("\nEnter the second number (Int): ");
    scanf("%d",&num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;
    division = (float)num1 / num2;
    modulus = num1 % num2;

    printf("\n\n  SUM: (%d + %d = %d) \n", num1, num2, addition);
    printf("\n\n  SUBTRACTION: (%d - %d = %d) \n", num1, num2, subtraction);
    printf("\n\n  MULTIPLICATION: (%d * %d = %d) \n", num1, num2, multiplication);
    printf("\n\n  DIVISION: (%d / %d = %f) \n", num1, num2, division);
    printf("\n\n  MODULUS: (%d %% %d = %d) \n", num1, num2, modulus);

    return 0;

}
