int main() {
int n, i;
unsigned long long a = 0, b = 1, c;
printf("Entrer le nombre de termes : ");
scanf("%d", &n);
for (i = 0; i < n; i++) {
if (i == 0) c = 0;
else if (i == 1) c = 1;
else {
c = a + b;
a = b;
b = c;
}
printf("%llu ", c);
}
printf("\n");
return 0;
}