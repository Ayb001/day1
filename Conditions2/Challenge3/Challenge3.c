#include <stdio.h>

int main() {
    int joursAccordes, joursUtilises, statut;
    int joursRestants;

    printf("Entrer le nombre total de jours de congés accordés : ");
    scanf("%d", &joursAccordes);

    printf("Entrer le nombre de jours de congés utilisés : ");
    scanf("%d", &joursUtilises);

    printf("Entrer le statut de l'employé (0=temps partiel, 1=temps plein) : ");
    scanf("%d", &statut);

    if (statut == 1) {
        joursRestants = joursAccordes - joursUtilises;
    } else {
        joursRestants = (joursAccordes / 2) - joursUtilises;
    }

    if (joursRestants < 0) {
        printf("Alerte : Vous avez dépassé vos jours de congés !\n");
    } else {
        printf("Jours de congé restant : %d\n", joursRestants);
    }

    return 0;
}

