#include<stdio.h>
#include<stdbool.h>

int main()
{
    float prize = 10.00;
    bool isstudent = false; // 10% discount
    bool issenior = true; // 20% discount

    //student = $9
    //senior =$8
    //student+senior = $7

    if(isstudent){
        if(issenior){
            printf("you get a student dicount of 10%\n");
            printf("you get a senior dicount of 20%\n");
            prize = prize*0.7;
        }
        else{
            printf("you get a student discount of 10%");
            prize = prize*0.9;
        }
    }
    else{
        printf("you get a senior dicount of 20%\n");
        prize = prize*0.8;
    }
    
    printf("The prize of a ticket is: $%.2f\n", prize);

    return 0;
}