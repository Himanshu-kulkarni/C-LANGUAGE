#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    /*int age;

    printf("ENTER YOU AGE: ");
    scanf("%d", &age);

    if(age>=65)
    {
    printf("you are a senior citizen");
    }

    else if(age>=18)
    {
        printf("you are a adult");
    }

    else if(age == 0)
    {
        printf("You are a newborn");
    }

    
    else
    {
        printf("you are minor mf");
    }
    */

    
    /*bool isstudent = false;

    if(isstudent){
        printf("You are a student");
    }
    else{
        printf("you are NOT student");
    }
    */

    char name[50];

    printf("ENTER YOUR NAME: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0){
        printf("YOU HAVE NOT ENTERED YOUR NAME");
    }
    else if(strcmp(name,"anish") == 0){
        printf("You are an asshole %s", name);
    }
    else if(strcmp(name,"tushar") == 0){
        printf("You are an asshole %s", name);
    }
    else{
        printf("hello %s", name);
    }

    return 0;


}