#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("entrer a:");
    scanf("%d",&a);
    printf("entrer b:");
    scanf("%d",&b);

    if(a==b)
    {
        sum=(a+b)*3;
    }
    else
    {
        sum=a+b;
    }
    printf("la somme est %d",sum);
}
