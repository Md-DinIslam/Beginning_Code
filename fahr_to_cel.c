#include <stdio.h>
int main()
{

    float Tf,Tc;
    /*input fahrenheit temperature*/

    printf("Enter Fahrenheit Temperature:\n");

    scanf("%f",&Tf);

    /*Fahrenheit to Celsius formula*/
    Tc=((Tf-32)*5) / 9;

    printf("Celsius Temperature: %f",Tc);

    return 0;

}

