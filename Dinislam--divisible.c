#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);
    if((number % 5 == 0) && (number % 11 == 0))
    {
        printf("Divisible by 5 and 11\n");
    }
    else
    {
        printf("Not Divisible:\n");
    }
    return 0;
}