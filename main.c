#include <stdio.h>
#include "helper.h"
#include "magic.Number.h"

int main(void) {
    int min, max;
    printf("=== Magische Zahle erraten (Binary Search) ===\n");
     printf("Das Programm findet die magische Zahl durch Fragen.\n\n");

    read_int_cli("Untere Grenze (min): ", &min);
    read_int_cli("Obere Grenze (max): ", &max);
    if (min > max) {
        int tmp = min; min = max; max = tmp;
        printf("Hinweis: min > max war vertauscht, wurde korrigiert.\n");
    }
    printf("Denke an eine Zahl zwischen %d und %d.\n", min, max);
    printf("Ich stelle dir Fragen im Format: 'Ist deine Zahl größer als X?'\n\n");
    int questions_count = 0;
    int questions = 0;
    int result = guess_magic_number(min, max, ask_is_greater_cli, &questions);
    printf("\nGefunden! Die magische Zahl ist %d.\n", result);
    printf("Anzahl der gestellten Fragen: %d\n", questions_count);
    return 0;
}
