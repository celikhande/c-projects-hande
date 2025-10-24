#include <stdio.h>
int main(void) {
    int n, i;
    float note, summe = 0, durchschnitt;
    printf("Wie viele Schüler möchten Sie eingeben? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("%d. Note eingeben (0-100): ", i);
        scanf("%f" , &note);
    }
    if (note >= 80 && note <= 100) {
        printf("Note: Sehr gut\n");
    }
    else if (note >= 60&& note <=79 ) {
        printf("Note: Gut\n");
    }
    else if (note >= 40 && note <=59 ) {
        printf("Note: Befriedigend\n");
    }
    else if (note >= 20 && note <=39 ) {
        printf("Note: Ausreichend\n");
    }
    else if (note >= 0 && note <=19 ) {
        printf("Note: Mangelhaft\n");
    }
    else {
        printf("Ungültige Note eingegeben.\n");
        i--; // Ungültige Eingabe, wiederhole die Eingabe für diesen Schüler
    }
        summe = summe + note;

        return 0;
    
}


