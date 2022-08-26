#include <stdio.h>
int main()
{
    int x,y,i,j,a[100][100],b[100][100],sum[i][j];
    printf("rows:  ");
    scanf("%d",&x);
    printf("column:  ");
    scanf("%d",&y);
    for(i=0; i <x; i++)
    for(j=0;j<y; j++)
    {
        printf ("Enter num a%d%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("2nd Matrix\n");
    for(i=0; i <x; i++)
    for(j=0;j<y; j++)
    {
        printf ("Enter num a%d%d: ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    for(i=0; i <x; i++)
    for(j=0;j<y; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];  
    }
    for(i=0; i <x; i++)
    {
    for(j=0;j<y; j++)
    {
        printf("%d   ",sum[i][j]);  
    }
      printf("\n");
    }
    return 0;
}