#include <stdio.h>
int main ()
{
  int a,b;
  scanf("%d %d",&a,&b);
  char num[100][100]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
  int store,i;
  for(i=a; i<=b; i++)
  {
    if(i<10)
    {
      store=i-1;
    }
    else if(i>9 && i%2==0)
    {
      store=9+i%2;
    }
    else if(i>9 && i%2!=0)
    {
      store=9+i%2;
    }
    printf("%s\n",num[store]);
  }
  return 0;
}