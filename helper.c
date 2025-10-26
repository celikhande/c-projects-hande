#include <stdio.h>
#include <ctype.h>
#include "helper.h"

static void flush_line(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}
int ask_is_greater_cli(int pivot) {
    while (1) {
        printf("Ist deine Zahl größer als %d? (j/n): ", pivot);
        int c = getchar();
        if (c == EOF) return 0;
        c = tolower(c);
        if (c == 'j' || c == 'y') { flush_line(); return 1; }
        if (c == 'n' || c == 'n') { flush_line(); return 0; }
            flush_line();
       printf("Bitte 'j' für Ja oder 'n' für Nein eingeben.\n");
    }
}
int read_int_cli(const char *prompt, int *out) {
    while (1) {
        printf("%s", prompt);
        int n, ok = scanf("%d", &n);
if (ok == 1) { *out = n; flush_line(); return 1;}
      flush_line();
      printf("Ungültige Eingabe. Bitte eine ganze Zahl eingeben.\n");}
    }