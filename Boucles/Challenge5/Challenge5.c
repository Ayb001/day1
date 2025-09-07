int main() {
int base, exposant, i;
long long resultat = 1;
printf("Entrer la base : ");
scanf("%d", &base);
printf("Entrer l'exposant : ");
scanf("%d", &exposant);
for (i = 0; i < exposant; i++) resultat *= base;
printf("%d^%d = %lld\n", base, exposant, resultat);
return 0;
}