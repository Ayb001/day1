#include <stdio.h>
int main()
{
    float a,b;
    printf("entrer a:");
    scanf("%f",&a);
    printf("entrer b:");
    scanf("%f",&b);
    printf("a+b=%f\n",a+b);
    printf("a-b=%f\n",a-b);
    printf("a*b=%f\n",a*b);
    if(b==0)
    {
        printf("en peut pas diviser sur 0");
    }
    else
    {
        printf("a/b=%f\n",a/b);
    }
}

