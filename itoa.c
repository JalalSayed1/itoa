
#include <stdio.h>
#include "reverse.c"

void itoa(int n, char s[]);

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
