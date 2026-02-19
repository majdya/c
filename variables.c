#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Hello, World C Types Examples!\n");

    printf("-----int-----\n");

    int age = 30;
    int year = 2026;
    int quantity = 7;
    printf("I am %d years old.\n", age);
    printf("The year is %d.\n", year);
    printf("I have %d apples.\n", quantity);

    printf("-----float-----\n");

    float gpa = 3.75;
    float price = 19.99;
    float temperature = 25.5;
    printf("My GPA is %.2f.\n", gpa);
    printf("The price is $%.2f.\n", price);
    printf("The temperature is %.1f° C.\n", temperature);

    printf("-----double-----\n");

    double pi = 3.14159265358979;
    double e = 2.71828182845904;
    printf("The value of pi is approximately %.15lf.\n", pi);
    printf("The value of e is approximately %.15lf.\n", e);

    printf("-----char-----\n");

    char grade = 'A';
    char letter = 'B';
    char symbol = '@';
    char currency = '$';
    printf("My grade is %c.\n", grade);
    printf("The letter is %c.\n", letter);
    printf("The symbol is %c.\n", symbol);
    printf("The currency is %c.\n", currency);

    printf("-----char[] (strings)-----\n");

    char name[] = "John";
    char message[] = "Hello, World!";
    printf("My name is %s.\n", name);
    printf("The message is %s.\n", message);

    bool isOnline = true;
    bool isRaining = false;
    printf("Is the user online? %s\n", isOnline ? "Yes" : "No");
    printf("Is it raining? %s\n", isRaining ? "Yes" : "No");
    return 0;
}