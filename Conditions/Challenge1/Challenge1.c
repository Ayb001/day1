#include <stdio.h>
int main()
{
    int n;
    printf("entrer nombre:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("nombre paire");
    }
    else
    {
        printf("nombre impaire");
    }
}
