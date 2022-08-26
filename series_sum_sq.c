#include <stdio.h>
int main()
{
    int num,i=1,sum=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(i;i<=num;i++)
    {
        if(i!=num)
        printf("%d^2 + ",i);
        else
        {
            printf("%d^2");
        }
        sum += i*i;
    }
    printf(" = %d",sum);
    return 0;
}