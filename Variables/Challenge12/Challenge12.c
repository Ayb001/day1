#include <stdio.h>
int main()
{
    int a=1234;
    int inverse=0;
    inverse=inverse*10+a%10;
    a=a/10;
    inverse=inverse*10+a%10;
    a=a/10;
    inverse=inverse*10+a%10;
    a=a/10;
    inverse=inverse*10+a%10;
    printf("%d",inverse);
}
