#include <stdio.h>
int main()
{
    int i,j,num;
    printf("Enter any number:\n");
    scanf("%d",&num);

    for(i=1; i <= num; i++)
    
    { 
        printf("\n");
    
       for(j=1; j <= i; j++)
    
        printf("%6d",j);
    }
    return 0;
}