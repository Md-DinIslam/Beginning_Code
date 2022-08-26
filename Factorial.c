#include <stdio.h>
int main ()
{
    int i,num,factorial=1;
    printf("Enter a value: \n");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        factorial*=i;
    }
        printf("Factorial = %d\n",factorial);
    return 0;
}