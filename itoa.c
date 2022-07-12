//* gcc -o output itoa.c && output

#include <stdio.h>
#include <math.h>
#include "reverse.c"

void itoa(int n, char s[]);

int main(int argc, char const *argv[])
{
    char s[100];
    
    // int n1 = -123;
    // itoa(n1, s);
    // printf("%d %s\n",n1, s);

    int n2 = 123;
    itoa(n2, s);
    printf("%d %s\n",n2, s);

    // -2^(wordwide-1) = -2147483648
    // int n3 = -pow(2, 31);
    // itoa(n3, s);
    // printf("%d %s\n",n3, s);
    
    return 0;
}


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
