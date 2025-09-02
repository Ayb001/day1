i#include <stdio.h>
int main()
{
    double km;
    double ms;
    printf("entrer la vitess en km/h:");
    scanf("%lf",&km);
    ms=km*0.27778;
    printf("la vitesse en ms est %lf",ms);
}
