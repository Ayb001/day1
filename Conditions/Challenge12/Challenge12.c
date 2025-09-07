#include <stdio.h>
int main()
{
    int h1,m1,s1;
    int h2,m2,s2;
    printf("Entrer le premier instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Entrer le deuxième instant (HH:MM:SS) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    if((h2>h1)||(h2==h1 && m2>m1) || (h2==h1 && m1==m2 && s2>s1))
    {
        printf("Le premier instant vient avant le deuxième.");
    }
    else if((h2<h1)||(h2==h1 && m2<m1) || (h2==h1 && m1==m2 && s2<s1))
    {
        printf("Le deuxième instant vient avant le premier.");
    }
    else
    {
        printf("Il s'agit du même instant.");
    }
}
