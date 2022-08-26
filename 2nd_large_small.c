#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the numbers of elements:\n");
    scanf("%d",&n);
    int num[n];
    for(i=0; i <n; i++)
    {
        printf ("Enter num %d:  ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0; i<n; i++)
    {
        int temp;
        {
            for(j=i+1; j<n; j++)
            {
                temp = num[i];
                num[i]= num[j];
                num[j]=temp;
            }
        }
    }

    printf("\n2nd largest = %d\n",num[1]);
    printf("\n");
    printf("2nd smallest = %d \n",num[n-2]);
    return 0;
}