#include <stdio.h>
int main() {
int n, i;
int fact = 1;
printf("Entrer un nombre : ");
scanf("%d", &n);
for (i = 1; i <= n; i++) {
fact *= i;
}
printf("%d! = %llu\n", n, fact);
return 0;
}