#include <stdio.h>

int main() {
    double revenu, deductions = 0, revenuNet, impot;
    int statut;

    printf("Entrer le revenu annuel (en euros) : ");
    scanf("%lf", &revenu);

    printf("Entrer le statut fiscal (1=Célibataire, 2=Marié, 3=Chef de famille) : ");
    scanf("%d", &statut);

    if (statut == 1)
        deductions = 1000;
    else if (statut == 2)
        deductions = 2000;
    else if (statut == 3)
        deductions = 3000;

    revenuNet = revenu - deductions;

    if (revenuNet <= 20000)
        impot = revenuNet * 0.05;
    else if (revenuNet <= 50000)
        impot = revenuNet * 0.10;
    else
        impot = revenuNet * 0.20;

    if (impot < 0)
        impot = 0;

    printf("Impôts à payer : %.2lf euros\n", impot);

    return 0;
}

