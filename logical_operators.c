#include<stdio.h>
#include<stdbool.h>

int main()
{
    // logical operators = used to combine or modify boolean expressions
    // && = and(it stops when it finds false statement)
    // || = or(it stops when it finds true statements)
    // ! = not

    /*int temp = 0;
    float cgpa = 0;

    printf("Enter the temp: ");
    scanf("%d", &temp);

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);

    //for temp
    if(temp > 0 && temp < 30){
        printf("The temperature is good\n");
    }
    else{
        printf("the temperature is bad\n");
    }

    //for cgpa
    if(cgpa >= 10 || cgpa <= 0){
        printf("your cgpa is bullshit");
    }
    else{
        printf("your cgpa is good");
    }*/

    bool issunny = false;

    if(!issunny){
        printf("It is cloudy today");
    }
    else{
        printf("it is sunny today");
    }
}