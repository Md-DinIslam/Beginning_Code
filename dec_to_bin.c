#include <stdio.h>
long long bin(int dec)
{
    long long binary=0,i=1, rem;
    while(dec!=0)
    {
        rem = dec % 2;
        binary = binary + (rem*i);
        i=i * 10;
        dec= dec/2;
    }
    return binary;
}
int main()
{
    long long binary;
    int dec;
    printf("Enter Decimal Number: ");
    scanf("%d",&dec);
    binary=bin(dec);
    printf("Binary number = %lld\n",binary);
    return 0;
}