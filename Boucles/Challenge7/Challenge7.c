int main() {
int n, inverse = 0;
printf("Entrer un entier : ");
scanf("%d", &n);
while (n != 0) {
inverse = inverse * 10 + n % 10;
n /= 10;
}
printf("Entier inversé = %d\n", inverse);
return 0;
}
