#include <stdio.h>

int main() {
    int age, anneesCotisation;
    double montant, bonus = 0;

    printf("Entrer l'âge : ");
    scanf("%d", &age);

    printf("Entrer le nombre d'années de cotisation : ");
    scanf("%d", &anneesCotisation);

    printf("Entrer le montant total épargné (en euros) : ");
    scanf("%lf", &montant);

    if (montant > 50000) {
        bonus = ((int)(montant - 50000) / 10000) * 0.05 * montant;
    }

    montant += bonus;

    if (age >= 65 && anneesCotisation >= 30 && montant >= 100000) {
        printf("Plan complet avec pension élevée\n");
    } else if (age >= 65 && anneesCotisation >= 20 && montant >= 50000) {
        printf("Plan partiel avec pension moyenne\n");
    } else if (age < 65) {
        printf("Plan épargne non encore disponible\n");
    } else {
        printf("Ne correspond à aucun plan spécifique\n");
    }

    return 0;
}

