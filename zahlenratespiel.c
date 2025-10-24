#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int geheim, tipp, versuche = 0;
    char weiter = 'j';

    srand((unsigned)time(NULL));  // Zufallszahlgenerator initialisieren

    printf("🎮 Willkommen zum Zahlenratespiel!\n");

    while (weiter == 'j' || weiter == 'J') {
        geheim = rand() % 100 + 1; // Zahl zwischen 1 und 100
        versuche = 0;

        printf("Ich habe eine Zahl zwischen 1 und 100 gewaehlt.\n");

        do {
            printf("Dein Tipp: ");
            scanf("%d", &tipp);
            versuche++;

            if (tipp < geheim) {
                printf("Zu klein! 🔽\n");
            } else if (tipp > geheim) {
                printf("Zu gross! 🔼\n");
            } else {
                printf("🎉 Richtig! Du hast es in %d Versuchen geschafft!\n", versuche);
            }
        } while (tipp != geheim);

        printf("Nochmal spielen? (j/n): ");
        scanf(" %c", &weiter);
    }

    printf("Danke fürs Spielen! 👋\n");
    return 0;
}