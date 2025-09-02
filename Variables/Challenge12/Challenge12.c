#include <stdio.h>
int main()
{
    int a=350;
    int inverse=0;
    while(a>0)
    {
        inverse=inverse*10 +a%10;
        a=a/10;
    }
    printf("inverse est %d",inverse);
}
