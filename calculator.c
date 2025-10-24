#include <stdio.h>
int main(void) {
  float a, b;
  char op;
  printf("Erste Zahl: ");
  scanf("%f", &a);
  printf("Operator (+, -, *, /): ");
  scanf(" %c", &op);
  printf("Zweite Zahl: ");
  scanf("%f", &b);
  if (op == '+') printf("Ergebnis: %.2f\n", a + b);
  else if (op == '-') printf("Ergebnis: %.2f\n", a - b);
  else if (op == '*') printf("Ergebnis: %.2f\n", a * b);
  else if (op == '/') {
    if (b != 0) printf("Ergebnis: %.2f\n", a / b);
    else printf("Fehler: Division durch Null!\n");
  } else {
    printf("Fehler: Ungültiger Operator!\n");
  }
  return 0;

}