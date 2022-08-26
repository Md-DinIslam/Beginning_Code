#include <stdio.h>
int main ()
{
    int x,count=1,sum=0;
    
    do
    {   
        scanf("%d",&x);
        sum=sum+x;
        
        count++;
    } while (count<=10);
     printf("Total Sum = %d\n",sum);
    
    
    return 0;
}