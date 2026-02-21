#include <stdio.h>
#include <string.h>

int main()
{

    // Shopping Cart Program

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Welcome to the OUR Store!\n");
    printf("What item you like to buy? ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = '\0'; // Remove the newline character

    printf("What is the item price? ");
    scanf("%f", &price);

    printf("How many you would like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s, priced %0.2f,\n total %0.2f\n", quantity, item, price, total);

    return 0;
}