#include <stdio.h>
int main()
{
    char x;
    printf("entrer x:");
    scanf("%c",&x);
    if(x>=65 && x<=90)
    {
        printf("Majuscule");
    }
    else if(x>=97 && x<=122)
    {
        printf("non Majuscule");
    }
    else
    {
        printf("invalid");
    }
}
