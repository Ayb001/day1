#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,x1,x2,D;
    printf("entrer a:");
    scanf("%f",&a);
    printf("entrer b:");
    scanf("%f",&b);
    printf("entrer c:");
    scanf("%f",&c);
    D=b*b-(4*a*c);
    if(D==0)
    {
        x1 = -b / (2*a);
        printf("la solution est : x = %.2f\n", x1); 
    }
    else if(D>0)
    {
        x1 = (-b + sqrt(D)) / (2*a);
        x2 = (-b - sqrt(D)) / (2*a);
        printf("solutions est : x1 = %.2f , x2 = %.2f\n", x1, x2);
    }
    else
    {
        printf("pas de solution");
    }
}
