#include <stdio.h>
int main()
{
    char nom[20];
    char prenom[20];
    int age; 
    char sexe[20];
    char adresse_email[20];
    printf("enter liast name:");
    scanf("%s",nom);
    printf("enter first name:");
    scanf("%s",prenom);
    printf("enter age:");
    scanf("%d",&age);
    printf("enter sex:");
    scanf("%s",sexe);
    printf("enter adress email:");
    scanf("%s",adresse_email);
    printf("\n\n");
    printf("last name: %s\n",nom);
    printf("first name: %s\n",prenom);
    printf("age: %d\n",age);
    printf("sexe: %s\n",sexe);
    printf("adresse email: %s\n",adresse_email);
}
