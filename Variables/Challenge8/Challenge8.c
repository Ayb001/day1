#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float Moyenne_geometrique;
    printf("entrer a:");
    scanf("%f",&a);
    printf("entrer b:");
    scanf("%f",&b);
    printf("entrer c:");
    scanf("%f",&c);
    Moyenne_geometrique = pow((a*b*c),(1.0/3.0));
    printf("Moyenne géométrique est %f",Moyenne_geometrique);
}
