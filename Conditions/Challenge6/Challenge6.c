#include <stdio.h>
int main()
{
    int x;
    printf("entrer le nombre:");
    scanf("%d",&x);

    if(x>0)
    {
        printf("positif");
    }
    else if(x<0)
    {
        printf("negatif");
    }
    else
    {
        printf("nul");
    }

}
