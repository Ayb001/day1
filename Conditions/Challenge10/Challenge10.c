#include <stdio.h>
int main()
{
    int m;
    int j;
    int a;
    int choix;
    printf("entrer la date sou forme 15/09/2012\n");
    printf("entrer jours:");
    scanf("%d",&j);
    printf("entrer mois:");
    scanf("%d",&m);
    printf("entrer anne:");
    scanf("%d",&a);
    switch(m)
    {
        case 1:
            printf("%d-janvier-%d",j,a);
            break;
        case 2:
            printf("%d-Février-%d",j,a);
            break;
        case 3:
            printf("%d-Mars-%d",j,a);
            break;
        case 4:
            printf("%d-Avril-%d",j,a);
            break;
        case 5:
            printf("%d-Mai-%d",j,a);
            break;
        case 6:
            printf("%d-Juin-%d",j,a);
            break;
        case 7:
            printf("%d-Juillet-%d",j,a);
            break;
        case 8:
            printf("%d-Août-%d",j,a);
            break;
        case 9:
            printf("%d-Septembre-%d",j,a);
            break;
        case 10:
            printf("%d-Octobre-%d",j,a);
            break;
        case 11:
            printf("%d-Novembre-%d",j,a);
            break;
        case 12:
            printf("%d-Décembre-%d",j,a);
            break;
        default:
            printf("Mois invalide.\n");
    }
}
