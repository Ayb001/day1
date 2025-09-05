#include <stdio.h>
int main()
{
    int choix;
    int anne;
    int resultat;

    printf("entrer l anne:");
    scanf("%d",&anne);
    printf("\n----- Menu -----\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    scanf("%d",&choix);
    switch(choix)
    {
        case 1:
            resultat=anne*12;
            printf("mois:%d",resultat);
            break;
        case 2:
            resultat=anne*365;
            printf("jours:%d",resultat);
            break;
        case 3:
            resultat=anne*365*24;
            printf("heures:%d",resultat);
            break;
        case 4:
            resultat=anne*365*24*60;
            printf("minutes:%d",resultat);
            break;
        case 5:
            resultat=anne*365*24*60*60;
            printf("secondes:%d",resultat);
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }
}
