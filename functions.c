#include<stdio.h>
#include<string.h>

void happybirthday(char name[], int age)
{
    printf("\nHappy birthday to you\n");
    printf("Happy birthday to you\n");
    printf("Happy birthday dear %s\n", name);
    printf("Happy birthday to you\n");
    printf("you are %d years old\n", age);
}

int main(){
    // function = a reusable section of code that can be invoced "called"
    //            Arguments can be sent to a function so that it can use them

    int age = 18;
    char name[50] = "";

    printf("Enter you name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1 ] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nTHE OUTPUT IS: \n");

    happybirthday(name, age);
}