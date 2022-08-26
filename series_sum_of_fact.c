#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long int i,j,fact=1,num,sum=0;
    printf("Enter any number:\n");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        if(i!=num)
        {
            printf("%d! + ",i);
        }
        else
        {
            printf("%d!",i);
        }
        for(j=1; j<=i;j++)
        fact *= j;
        sum += fact;
    }
    printf(" = %lu\n",sum);
    
    
    return 0;
}