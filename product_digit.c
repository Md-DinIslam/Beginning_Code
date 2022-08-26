#include <stdio.h>
int main ()
{
    int product=1,number,remainder;
    printf("Enter a number: \n");
    scanf("%d",&number);
        do
        {
            remainder=number%10;
            product=product*remainder;
            number/=10;
        } while (number != 0);
        printf("Product of digits = %d\n",product);
        
    return 0;
}