#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    //pseudo-random = appear random but are determined by a mathematical formula that
    //                uses a seed value to generate a predictable sequenceof numbers
    //                advanced: mersenne Twister or /dev/random

    //printf("%d", rand());
    /*this will print a random number but everytime we will run the code, the same random number will be printed*/

    srand(time(NULL));

    printf("%d\n", rand());
    printf("%d", RAND_MAX);


return 0;

}