#include <stdio.h>

int main() {
    int age, type, accidents;
    double primeBase, prime;

    printf("Entrer la prime de base : ");
    scanf("%lf", &primeBase);

    printf("Entrer l'âge du conducteur : ");
    scanf("%d", &age);

    printf("Entrer le type de voiture (1=Sportive, 2=Utilitaire, 3=Familiale) : ");
    scanf("%d", &type);

    printf("Entrer le nombre d'accidents au cours des 5 dernières années : ");
    scanf("%d", &accidents);

    if (age < 25) {
        prime = primeBase * 1.5;
    } else if (age <= 65) {
        prime = primeBase;
    } else {
        prime = primeBase * 1.2;
    }

    if (type == 1) {
        prime *= 2;
    } el

