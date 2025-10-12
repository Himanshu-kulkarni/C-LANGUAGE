#include<stdio.h>
#include<stdbool.h>


int getmax(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

bool agecheck(int age){
    if(age >= 18)
    {
        return true;
    }
    else{
        return false;
    }
}

double cube(double num){
    return num * num * num;
}

double square(double num){

    //int result = num * num;
    //return result;

    return num * num;
}



int main(){
    //return = returns a value back to where you call function

    int age = 19;


    double x = square(2.1);
    double y = square(3.2);
    double z = square(5.3);

    
    double a = cube(2.1);
    double b = cube(3.2);
    double c = cube(5.3);

    printf("Squares\n");
    printf("%lf\n", x);
    printf("%lf\n", y);
    printf("%lf\n", z);

    printf("\nCubes\n");
    printf("%lf\n", a);
    printf("%lf\n", b);
    printf("%lf\n", c);


    printf("\nage checker: ");
    if (agecheck(age)){
        printf("\nyou may sign up");
    }
    else{
        printf("\nYou must be 18+ to be able to sign up\n");
    }

    
    int max = getmax(4, 5);

    printf("\nmaximum number checker\n");
    printf("The maximum integer is %d", max);

return 0;
}