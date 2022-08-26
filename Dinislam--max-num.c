#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 integers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b && c<=a)
    {
        printf("%d is the largest number:\n",a);
    }
    else if (b>=a && c<=b)
    {
        printf("%d is the largest number:\n",b);
    }
    else 
    {
        printf("%d is the largest number",c);
    }       
    return 0;
}