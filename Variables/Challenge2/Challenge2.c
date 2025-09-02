#include <stdio.h>
int main()
{
    float Celsius;
    float Kelvin;
    printf("entrer la température en Celsius:");
    scanf("%f",&Celsius);
    Kelvin = Celsius + 273.15;
    printf("la temperature en Kelvin est %f",Kelvin);
}
