#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int getuserchoice();
int getcompchoice();
void checkwinner(int userchoice, int compchoice);

int main()
{
    srand(time(NULL));

    printf("***ROCK PAPERS n SCISSORS***\n");
    
    int userchoice = getuserchoice();
    int compchoice = getcompchoice();

    switch(userchoice){
        case 1:
            printf("you choose ROCK!\n");
            break;
        case 2:
            printf("you choose PAPERS!\n");
            break;
        case 3:
            printf("you choose SCISSORS!\n");
            break;
    }

    switch(compchoice){
        case 1:
            printf("computer choose ROCK!\n");
            break;
        case 2:
            printf("computer choose PAPERS!\n");
            break;
        case 3:
            printf("computer choose SCISSORS!\n");
            break;
    }

    checkwinner(userchoice, compchoice);

    return 0;
}

int getuserchoice()
{
    int choice = 0;
    do{
        printf("choose an option\n");
        printf("1 ROCK\n");
        printf("2 PAPERS\n");
        printf("3 scissors\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
    }while (choice < 1 || choice > 3);
    return choice;
}

int getcompchoice()
{

    return (rand() %3) + 1;
}

void checkwinner(int userchoice, int compchoice)
{
    if(userchoice == compchoice)
    {
        printf("ITS A TIE!!");
    }
    else if((userchoice == 1 && compchoice == 3) || 
            (userchoice == 2 && compchoice == 1) || 
            (userchoice == 3 && compchoice == 2))
    {
        printf("You win");
    }
    else
    {
        printf("You lose");
    }

}
