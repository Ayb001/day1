#include <stdio.h>

int main() {
    int score, anciennete, recompenses;
    double evaluationScore;

    printf("Entrer le score de performance (0-100) : ");
    scanf("%d", &score);

    printf("Entrer l'ancienneté (en années) : ");
    scanf("%d", &anciennete);

    printf("Entrer le nombre de récompenses reçues (0,1,2 ou plus) : ");
    scanf("%d", &recompenses);

    evaluationScore = score;

    if (recompenses == 1) {
        evaluationScore *= 1.1;
    } else if (recompenses >= 2) {
        evaluationScore *= 1.2;
    }

    if (evaluationScore >= 90 && anciennete >= 5) {
        printf("Évaluation : Excellente\n");
    } else if (evaluationScore >= 75 && anciennete >= 3) {
        printf("Évaluation : Bonne\n");
    } else if (evaluationScore >= 50 && anciennete < 3) {
        printf("Évaluation : Satisfaisante\n");
    } else if (evaluationScore < 50) {
        printf("Évaluation : Insuffisante\n");
    } else {
        printf("Évaluation : Ne correspond à aucun critère\n");
    }

    return 0;
}

