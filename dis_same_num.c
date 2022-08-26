#include <stdio.h>
int main ()
{
    int i,j,num;
    printf("Enter number of rows:\n");
    scanf("%d",&num);
    for(i = num; i >= 1; i--)
    {
        printf("\n");
        for(j = num; j >= i; j--)
        printf("%5d",i);
    }
    return 0;
}