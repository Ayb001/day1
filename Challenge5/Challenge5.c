#include <stdio.h>
int main()
{
    float celsius;
    printf("entrer la température en Celsius:");
    scanf("%f",&celsius);
    if(celsius<0)
    {
        printf("Solide");
    }
    else if(celsius>=0 && celsius<100)
    {
        printf("Liquide");
    }
    else
    {
        printf("Gaz");
    }


}
