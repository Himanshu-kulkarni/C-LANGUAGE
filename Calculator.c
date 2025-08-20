#include<stdio.h>

int main()
{
    //calculator program

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("ENTER THE FIRST NUMBER: ");
    scanf(" %lf", &num1);

    printf("WHAT OPERATION DO YOU WANNA DO? (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("ENTER THE SECOND NUMBER: ");
    scanf(" %lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default :
            printf("Please enter the valid information");
    }

    printf("THE RESULT IS: %.3lf", result);

    return 0;
}