#include <stdio.h>

int main() {
    double consommation, facture;
    int typeUtilisateur, typeContrat;

    printf("Entrer la consommation en kWh : ");
    scanf("%lf", &consommation);

    printf("Entrer le type d'utilisateur (1=Résidentiel, 2=Commercial) : ");
    scanf("%d", &typeUtilisateur);

    printf("Entrer le type de contrat (0=Standard, 1=Réduit) : ");
    scanf("%d", &typeContrat);

    if (typeUtilisateur == 1) {
        if (typeContrat == 0)
            facture = consommation * 0.20;
        else
            facture = consommation * 0.15;
    } else {
        if (typeContrat == 0)
            facture = consommation * 0.30;
        else
            facture = consommation * 0.25;
    }

    if (consommation > 500)
        facture *= 1.10;

    printf("La facture d'électricité est : %.2lf euros\n", facture);

    return 0;
}

