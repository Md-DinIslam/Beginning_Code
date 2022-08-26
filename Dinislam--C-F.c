#include <stdio.h>
int main()
{

    float Tc, Tf;
    /*input fahrenheit temperature*/

    printf("Enter Celcius Temperature:");

    scanf("%f",&Tc);

    /*Fahrenheit to Celsius formula*/
    Tf= (Tc*9/5) + 32;

    printf("Fahrenheit Temperature: %f",Tf);

    return 0;

}

