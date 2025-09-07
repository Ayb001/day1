#include <stdio.h>

int main() {
    double salaireBase, salaireFinal, tauxHoraire;
    int heuresSupp, typePoste;

    printf("Entrer le salaire de base (en euros) : ");
    scanf("%lf", &salaireBase);

    printf("Entrer le nombre d'heures supplémentaires : ");
    scanf("%d", &heuresSupp);

    printf("Entrer le type de poste (1=Junior, 2=Senior) : ");
    scanf("%d", &typePoste);

    tauxHoraire = salaireBase / 160.0; 
    salaireFinal = salaireBase + heuresSupp * tauxHoraire * 1.5;

    if (typePoste == 1) {
        salaireFinal += salaireBase * 0.10;
    } else if (typePoste == 2) {
        salaireFinal += salaireBase * 0.20;
    }

    printf("Salaire total : %.2lf euros\n", salaireFinal);

    return 0;
}

