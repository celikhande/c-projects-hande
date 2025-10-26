#ifndef MAGIC_NUMBER_H
#define MAGIC_NUMBER_H

typedef int (*ask_fn)(int pivot);
int guess_magic_number(int min, int max, ask_fn ask_is_greater, int *questions_count);

#endif