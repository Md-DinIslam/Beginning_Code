#include <stdio.h>
#include <math.h>
int main ()
{
    int number,fdigit,ldigit,digits,snumber;
    printf("Enter any number: \n");
    scanf("%d",&number);
    ldigit=number % 10;
    digits = log10(number);
    fdigit = (number / (pow(10,digits)));
    snumber = ldigit;
    snumber *= pow(10,digits);
    snumber += number % ((int)pow(10,digits));
    snumber -= ldigit;
    snumber += fdigit;
    printf("Swapped Number = %d\n",snumber);
    return 0;
}