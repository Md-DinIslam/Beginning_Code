#include <stdio.h>
int main()
{
    float Math=85,Phy=89,Che=78,Ban=73,Eng=86, sum, average;

    sum=Math+Phy+Che+Ban+Eng;
    printf("Total Sum: %f\n",sum);
    average=sum/5;
    printf("Average: %f",average);
    return 0;
}
