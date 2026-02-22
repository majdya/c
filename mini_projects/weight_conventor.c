#include <stdio.h>

int main()
{
    // WEIGHT CONVERTER PROGRAM

    float lbs = 0.0f, kg = 0.0f, weight = 0.0f, converted = 0.0f;
    int choice = 0;

    printf("Weight converter program!\n");
    printf("Choose 1 to convert to kg.\n");
    printf("Choose 2 to convert to lbs.\n");
    scanf("%d", &choice);

    printf("Please enter the weight you want to convert:");
    scanf("%f", &weight);

    if (choice == 1)
    {
        converted = weight * 0.453592f; // Convert lbs to kg
        printf("converting %.2f lbs to kg: %.2f kg\n", weight, converted);
    }
    else if (choice == 2)
    {
        converted = weight * 2.20462f; // Convert kg to lbs
        printf("converting kg %.2f to lbs: %.2f lbs\n", weight, converted);
    }
    else
    {
        printf("Invalid choice.\n");
    }
}