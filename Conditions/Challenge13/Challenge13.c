#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    int x, y;

    printf("Entrer les coordonnées du premier point du segment (x1 y1) : ");
    scanf("%d %d", &x1, &y1);

    printf("Entrer les coordonnées du deuxième point du segment (x2 y2) : ");
    scanf("%d %d", &x2, &y2);

    printf("Entrer les coordonnées du point à tester (x y) : ");
    scanf("%d %d", &x, &y);

    if ((x - x1)*(y2 - y1) == (y - y1)*(x2 - x1)) {
        int entreX = (x >= x1 && x <= x2) || (x >= x2 && x <= x1);
        int entreY = (y >= y1 && y <= y2) || (y >= y2 && y <= y1);

        if (entreX && entreY) {
            printf("Le point (%d,%d) se trouve sur le segment.\n", x, y);
        } else {
            printf("Le point (%d,%d) ne se trouve pas sur le segment.\n", x, y);
        }

    } else {
        printf("Le point (%d,%d) ne se trouve pas sur le segment.\n", x, y);
    }

    return 0;
}

