#include<stdio.h>
#include<stdbool.h>

int main()
{
    float prize = 10.00;
    bool isstudent = false;

    if(isstudent){
        printf("YOU GET A STUDENT DISCOUNT OF 10%\n");
        prize = prize *= 0.9;
    }
    
    printf("The prize of a ticket is: $%.2f\n", prize);
}