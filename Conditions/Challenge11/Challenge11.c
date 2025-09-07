#include <stdio.h>
#include <time.h>

int my_rand(int max) {
    static unsigned int seed = 0;

    if (seed == 0) {
        seed = (unsigned)time(NULL);
    }

    seed = seed * 1103515245 + 12345;
    return (seed % max);
}

int main() {
    char *jours[7] = {
        "Lundi", "Mardi", "Mercredi", "Jeudi",
        "Vendredi", "Samedi", "Dimanche"
    };

    int index = my_rand(7);

    printf("Jour choisi au hasard: %s\n", jours[index]);

    return 0;
}
