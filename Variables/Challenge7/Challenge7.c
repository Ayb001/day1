#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    int moy;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b:");
    scanf("%d",&b);
    printf("entrer c:");
    scanf("%d",&c);
    moy=((a*2)+(b*3)+(c*5))/(2+3+5);
    printf("La moyenne ponderee est %d",moy);
}
