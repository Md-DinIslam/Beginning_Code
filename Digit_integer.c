#include <stdio.h>
int main ()
{
    int num, digit=0;
    printf("Enter any number:\n");
    scanf("%d",&num);
    do
    {
        num /= 10;
        digit++;
    }
    while (num != 0);
    printf("Digit = %d", digit);
    return 0;
}