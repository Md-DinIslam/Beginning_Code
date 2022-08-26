#include <stdio.h>
int main()
{
    int i,j,a,b, matrix[10][10],trans_mat[10][10];
    printf("Enter Row:\n");
    scanf("%d",&a);
    printf("Enter Column:\n");
    scanf("%d",&b);
    printf("Enter value of Matrix:\n");
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
        {   
            printf("a%d%d = ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
        {
            trans_mat[j][i]=matrix[i][j];
        }
    printf("Transpose of Matrix:\n");
    for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            printf("%d\t",trans_mat[i][j]);
            printf("\n");
        }
    return 0;
}