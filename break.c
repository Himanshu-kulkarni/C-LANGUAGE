#include<stdio.h>

int main()
{
    // break = break out of the loop

    for(int i =1; i <=10; i++)
    {

        if(i == 4){
            break;
        }

        printf("%d\n", i);
    }
    
}