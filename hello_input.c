#include <stdio.h>
int main(void) {
    char name[100];
    printf("Wie heisst du?");
    scanf("%99s" , name);
    printf("Hello %s!\n" , name);
    return 0;
}
