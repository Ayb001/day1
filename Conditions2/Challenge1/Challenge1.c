#include <stdio.h>

int main() {
    double revenu;
    int score;
    int duree;

    printf("Entrer le revenu annuel (en euros) : ");
    scanf("%lf", &revenu);

    printf("Entrer le score de crédit (sur 1000) : ");
    scanf("%d", &score);

    printf("Entrer la durée du prêt (en années) : ");
    scanf("%d", &duree);

    if (revenu >= 30000 && score >= 700 && duree <= 10) {
        printf("Éligible\n");
    } else if (revenu >= 30000 && score >= 650 && duree <= 15) {
        printf("Éligible avec conditions\n");
    } else {
        printf("Non éligible\n");
    }

    return 0;
}

