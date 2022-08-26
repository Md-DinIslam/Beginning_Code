#include <stdio.h>
int main ()
{
  int i=1,sum=0,x=1,num;
  printf("Enter a number: \n");
  scanf("%d",&num);
  for (i; i<=num; i++)
  {   
      printf("%d",x);
      if (i<num)
      {
        printf(" + ");
      }
        sum=sum+x;
        x=(x*10)+1;
        
  }
  
  printf(" = %d\n",sum);
  
  return 0;
}