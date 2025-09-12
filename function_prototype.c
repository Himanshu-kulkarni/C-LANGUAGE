#include<stdio.h>
#include<stdbool.h>

void hello(char name[], int age);// function prototype

int main(){
    // function prototype = provide the compiler w/ info about a fucntion's:
    //                      name, return type, and parameters before its actual definition.
    //                      Enables type checking and allows fucntions to be used before
    //                      they're defined.
    //                      Improves readability, organization, and helps prevent errors.

    hello("himanshu", 18);
    
}

void hello(char name[], int age){
    printf("hello %s\n", name);
    printf("You are %d years old\n", age);

}