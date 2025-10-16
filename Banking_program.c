#include<stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{
    int choice = 0;
    float balance =0.0f;

    do{
        printf("***WELCOME TO THE BANK***\n");
        printf("choose an optiom:\n");
        printf("1. Check Balance\n");
        printf("2. deposit money\n");
        printf("3. withdraw money\n");
        printf("4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                checkbalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("\nThank you for using bank!\n");
                break;
            default:
                printf("\nInvalid Choice (please select 1 to 4) ");
        }

    }while( choice != 4);

    return 0;
}

void checkbalance(float balance)
{
    printf("\nYour current bank balance is : $%.2f\n\n", balance);
}
float deposit()
{
    float amount =0.0f;

    printf("\nEnter the amout you want to deposit : ");
    scanf("%f", &amount);

    if(amount < 0)
    {
        printf("\nInvalid amount\n");

        return 0.0f;
    }
    else
    {
        printf("succesfully deposited $%.2f\n\n", amount);

        return amount;
    }
}
float withdraw(float balance)
{
    float amount = 0.0f;

    printf("\nEnter the amount you want to withdraw : ");
    scanf("%f", &amount);

    if(amount < 0)
    {
        printf("\nInvalid Amount");
        return 0.0f;
    }
    else if(amount > balance)
    {
        printf("\nInsufficient funds, Your withdraw $%.2f\n", balance);
        return 0.0f;
    }
    else
    {
        printf("\nSuccesfully deposited $%.2f ", amount);
        return amount;
    }
}
