#include <stdio.h>
#include <math.h>
int main()
{
    float r,V;
    printf("entrer le rayon:");
    scanf("%f",&r);
    V=(4/3) * 3.14 * pow(r,3);
    printf("le volume est :%f",V);
}
