#include<stdio.h>

// int result = 0; // GLOBAL SCOPE (HARD TO DEBUG)

int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}


int main(){

    //Variable scope= refers to where a variable is recognized and accessible.
                     //variables can share name if the are in different scopes{}
    int x = 3;
    int y = 4;

    int result= add(x, y);
    printf("Addition of these numbers is: %d\n", result);

    int result2= subtract(x, y);
    printf("subtraction of these numbers is: %d", result2);

return 0;
}