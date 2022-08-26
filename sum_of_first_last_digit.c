#include <stdio.h>
int main ()
{
    int number,sum=0,fdigit,ldigit;
    printf("Enter any number: \n");
    scanf("%d",&number);
    ldigit=number % 10;
    fdigit=number;
    while (number >= 10)
    {
        number=number/10;
    }
    fdigit = number;
    sum=fdigit + ldigit;
    printf("Sum of first & last digit = %d", sum);

    return 0;
}