/*

write a function that shutters a word as if someone is struggling to read it. The first two letters are repeated twice with an ellipsis ... , and then the word is pronounced with a question mark?

Input Format

a string

Constraints

no

Output Format

xx... xx... ~~~~~~~?

*/

#include <stdio.h>
#include <string.h>

void shutterWord(char* a) {
    char b[300] = {0};
    char c[3];
    if (strlen(a) >= 2) {
        c[0] = a[0];
        c[1] = a[1];
        c[2] = '\0';

        strcat(b, c);
        strcat(b, "...");
        strcat(b, c);
        strcat(b, "...");
        strcat(b, a);
        strcat(b, "?");
    }

    else if (strlen(a) == 1) {
        c[0] = a[0];
        c[1] = '\0';
        strcat(b, c);
        strcat(b, "...");
        strcat(b, c);
        strcat(b, "...");
        strcat(b, a);
        strcat(b, "?");
    }
    printf("%s\n", b);
}

int main() {
    char a[100];
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    shutterWord(a);

    return 0;
}
