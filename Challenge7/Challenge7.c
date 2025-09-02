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
    moy=(pow(a,2)+pow(b,3)+pow(c,5));
    printf("%d",moy);
}
