#include <stdio.h>
int main()
{
    int array[100],frequency[100],count,num,i,j;
    printf("Enter Array Size:\n");
    scanf("%d",&num);
    printf("Elements:\n");
    for(i=0; i<num;i++)
    {
        scanf("%d",&array[i]);
        frequency[i] = -1;
    }
    for(i=0; i<num;i++)
    {   
        count=1;
        for(j=i+1; j<num; j++)
        {
            if(array[i] == array[j])
            {
                count++;
                frequency[j] = 0;
            }
        }
        if(frequency[i]!=0)
        {
            frequency[i] = count;
        }
    }
    for(i=0; i<num; i++)
    {
        if(frequency[i]!=0)
        {
            printf("Frequency of %d is %d times:\n",array[i],frequency[i]);
        }
    }

    return 0;
}