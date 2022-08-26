#include <stdio.h>
int main ()
{
    int i,num;
    printf("Enter any number:\n");
    scanf("%d",&num);
    for(i=1; i <= num; i++)
    {
        printf("%d   %d\n",i,i*i);
    }
    return 0;
}