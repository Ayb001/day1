int main() {
int n, i, val = 1;
printf("Entrer un nombre : ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
printf("%d ", val);
val += 2;
}
printf("\n");
return 0;
}