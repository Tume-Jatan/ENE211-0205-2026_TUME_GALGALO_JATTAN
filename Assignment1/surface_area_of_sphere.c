#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double PI = 3.142;
    float radius;
    float surfaceArea;
    printf("\nSURFACE AREA OF A SPHERE\n\n");
    printf("Enter the radius of the sphere: ");
    scanf("%f",&radius);
    surfaceArea = 4*PI*radius*radius;
    printf("\nSurface area of the sphere with radius %.2f is %.2f\n",radius,surfaceArea);
    return 0;
}
