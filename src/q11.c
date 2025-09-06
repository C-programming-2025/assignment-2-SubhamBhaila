#include <stdio.h>
int main() {
    int i, j, space, rows = 3;
    for (i = rows; i >= 1; i--) {
        for (space = rows; space > i; space--)
            printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
