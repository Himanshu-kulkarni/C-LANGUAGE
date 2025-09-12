#include<stdio.h>
#include<string.h>

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

    /*do{
        printf("Enter the number greater than zero: ");
        scanf("%d", &number);
    }while(number<=0);*/

    char name[50]= "";

    printf("Enter Your Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name) == 0){
        printf("name cannot be empty, Enter Your Name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("hello %s", name);

return 0;
}