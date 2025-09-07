int main() {
int n, i, sum = 0;
printf("Entrer un nombre : ");
scanf("%d", &n);
for (i = 1; i <= n; i++) sum += i;
printf("Somme des %d premiers nombres = %d\n", n, sum);
return 0;
}