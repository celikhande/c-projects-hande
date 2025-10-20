#include <stdio.h>
int main(void) {
int a, b;
printf("liest die erste Zahl ein: ");
scanf("%d" , &a);

printf("liest die zweite Zahl ein: ");
scanf("%d" , &b);

int summe = a + b;
printf("Summe = %d\n" , summe);
return 0;
}