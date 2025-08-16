#include<stdio.h>
#include<string.h>

int main()
{
    char item[50] ="";
    float prize = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    total = prize*quantity;

    printf("Enter the item name: ");
    fgets(item, sizeof(item), stdin);

    printf("Enter the price of the item: ");
    scanf("%f", &prize);

    printf("ENTER THE QUANTITY OF THE ITEM YOU WOULD LIKE: ");
    scanf("%d", &quantity);

    printf("\nYOU HAVE BOUGHT: %d %s",quantity, item);
    printf("YOU TOTAL IS: %c%.2f",currency, total);

return 0;
    /*
    This program calculates the total price of items in a shopping cart.
    It takes user input for item name, price, and quantity, then calculates
    the total cost and displays it.
    */
}