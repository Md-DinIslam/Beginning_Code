#include <stdio.h>
int main ()
{
  int num=0,sum=2;
  while (num<10)
      
  { 
    sum*=2;
    num++;
    if (num!=6)
    {
      continue;
    }
    else
  {
    printf("%d value = %d\n",num,sum);
  }
    
  }
  
  return 0;
}