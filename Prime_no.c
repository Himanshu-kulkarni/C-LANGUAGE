#include<stdio.h>

int main()
{
    int n;

    // Ask user for the range
    printf("Enter a positive integer up to which you want prime numbers: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for(int i = 2;i <= n; i++)
    {
        int isprime = 1;
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime)
            printf("%d\n", i);
    }
return 0;

}