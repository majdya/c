#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("What is the radius of the circle in cm: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4 / 3.0) * PI * pow(radius, 3);

    printf("Area: %0.2fcm\n", area);
    printf("Surface Area: %0.2fcm\u00B2\n", surfaceArea);
    printf("Volume: %0.2fcm\u00B3\n", volume);

    return 0;
}