
#include "reverse.c"
#include <stdio.h>

void itoa(int n, char s[]);
void itoa_recursively(int n, char s[]);

void itoa(int n, char s[]) {
    int i, sign;

    if ((sign = n) < 0) {
        n = -n;
    }

    i = 0;
    do {
        // printf("%d\n", n%10);
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);

    if (sign < 0) {
        s[i++] = '-';
    }

    s[i] = '\0';
    // reverse the string because the digits are generated in the wrong order (lower order digits are available before high order digits):
    reverse(s);
}

void itoa_recursively(int n, char s[]) {

    static int i;
    static int sign;

    if (n < 0) {
        // printf("-ve: %d\n", n);
        sign = -1;
        n = -n;
        // printf("-ve: %d\n", n);
    }

    // printf("add to s: %d\n", n % 10);
    s[i++] = n % 10 + '0';
    // printf("added: %s\n", s);

    if ((n /= 10) > 0) {
        // printf("another rec with %d --> %s\n", n, s);
        itoa_recursively(n, s);
    } else {
        if (sign < 0) {
            // printf("Adding -ve to s\n");
            s[i++] = '-';
            sign = 1;
            // printf("%s", s);
        }
        s[i++] = '\0';
        // printf("Reversing %s\n", s);
        reverse(s);
        return;
    }


    // reverse_recursively(s, 0, strlen(s) - 1);
}
