#include<stdio.h>

int main()
{
    //while loop = continue some code while the condition remains true
    // condition must be true

    int number = 0;

    /*while(1==1){
        printf("stuck in a loop\n");
    }*/

    /*while(number<=0){
        printf("Enter the number greater than zero: ");
        scanf("%d", &number);
    }*/

    do{
        printf("Enter the number greater than zero: ");
        scanf("%d", &number);
    }while(number<=0);

return 0;
}