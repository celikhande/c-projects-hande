#include "magic.Number.h"

int guess_magic_number(int min, int max, ask_fn ask_is_greater, int *questions_count) {
    int q = 0;
    while (min < max) {
        int pivot = min + (max - min) / 2; 
        int is_greater = ask_is_greater(pivot);
        q++;
        if (is_greater) {
            min = pivot + 1;
        } else {
            max = pivot;

        }
        }
        if (questions_count) {
            *questions_count = q;
        }
        return min;
    }
    