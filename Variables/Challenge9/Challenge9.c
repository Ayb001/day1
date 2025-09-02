#include <stdio.h>
#include <math.h>
int main()
{
    float D,x1,x2,y1,y2,z1,z2;
    printf("entrer X1:");
    scanf("%f",&x1);
    printf("entrer X2:");
    scanf("%f",&x2);
    printf("entrer Y1:");
    scanf("%f",&y1);
    printf("entrer Y2:");
    scanf("%f",&y2);
    printf("entrer Z1:");
    scanf("%f",&z1);
    printf("entrer Z2:");
    scanf("%f",&z2);
    D=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("la distance entre deux points dans un espace 3D est %f",D);
}
