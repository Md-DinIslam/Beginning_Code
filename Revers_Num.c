#include <stdio.h>
int main ()
{
    int a, reverse=0, raminder;
    printf("Enter an integer\n");
    scanf("%d",&a);
    while (a!=0)
    {
        raminder=a%10;
        reverse=reverse*10+raminder;
        a/=10;
    }
        printf("Reverse = %d", reverse);
    
    return 0;
}