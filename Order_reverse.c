#include <stdio.h>
int main()
{
    int a[5],i;
    printf("Enter 5 Integers:\n");
    for(i=1; i <= 5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse Numbers are:\n");
    for (  i = 5; i >= 1; i--)
    {
        printf("%d\n",a[i]);
    }
    
        
    
    return 0;
}