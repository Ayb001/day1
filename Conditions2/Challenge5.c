#include <stdio.h>

int main() {
    double budget;
    int destination, personnes;

    printf("Entrer le budget en euros : ");
    scanf("%lf", &budget);

    printf("Entrer le type de destination (1=Plage, 2=Montagne, 3=Ville) : ");
    scanf("%d", &destination);

    printf("Entrer le nombre de personnes : ");
    scanf("%d", &personnes);

    if (budget >= 1000) {
        printf("Voyage haut de gamme\n");
        if (destination == 1 && personnes > 2) {
            printf("Destination recommandée : Plage\n");
        } else {
            printf("Destination recommandée : Ville\n");
        }
    } else if (budget >= 500) {
        printf("Voyage moyen\n");
        if (destination == 2 && personnes <= 2) {
            printf("Destination recommandée : Montagne\n");
        } else {
            printf("Destination recommandée : Ville\n");
        }
    } else {
        printf("Voyage économique\n");
        printf("Destination recommandée : Ville\n");
    }

    return 0;
}

