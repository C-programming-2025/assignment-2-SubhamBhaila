#include <stdio.h>
int main() {
    int n, fact = 1, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        fact *= i;
        i++;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}
