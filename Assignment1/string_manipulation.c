#include <stdio.h>
#include <string.h>

int main()
{
    char favouriteColor[20];
    printf("What is your favourite color?  ");
    fgets(favouriteColor,sizeof(favouriteColor),stdin);
    printf("\nYour favourite color is %s\n",favouriteColor);
    printf("Your favourite color is %d characters long.\n",strlen(favouriteColor));
    return 0;
}
