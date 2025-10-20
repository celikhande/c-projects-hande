#include <stdio.h>
int main(void) {
    int n, sum = 0;
    printf("Geben Sie eine Zahl ein: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++) {
    sum = sum + i;
}
    printf("Zwischensumme nach Hinzufuegen von %d: %d\n", n, sum);
    return 0;
}