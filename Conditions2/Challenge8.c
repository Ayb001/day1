#include <stdio.h>

int main() {
    int age, historique, couverture;
    char plan[50] = "";

    printf("Entrer l'âge : ");
    scanf("%d", &age);

    printf("Entrer l'historique médical (0=Aucun, 1=Mineur, 2=Majeur) : ");
    scanf("%d", &historique);

    printf("Entrer le type de couverture (1=Base, 2=Etendue) : ");
    scanf("%d", &couverture);

    if (age < 30) {
        sprintf(plan, "Plan de base");
    } else {
        if (historique == 0) {
            sprintf(plan, "Plan de base");
        } else {
            sprintf(plan, "Plan étendu");
        }
    }

    if (historique == 2) {
        strcat(plan, " avec couverture supplémentaire pour problème majeur");
    }

    printf("Plan de santé recommandé : %s\n", plan);

    return 0;
}

