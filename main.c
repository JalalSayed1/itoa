//* gcc -o output main.c && output

#include <stdio.h>
#include <math.h>
#include "printd.c"
#include "itoa.c"

void itoa(int n, char s[]);

int main() {
    char s[100];

    // int n1 = -123;
    // itoa(n1, s);
    // printf("%d -> %s\n", n1, s);

    // int n2 = 123;
    // itoa(n2, s);
    // printf("%d -> %s\n", n2, s);

    // -2^(wordwide-1) = -2147483648
    // int n3 = -pow(2, 31);
    // itoa(n3, s);
    // printf("%d %s\n",n3, s);

    // int n4 = -123;
    // printf("%d -> ", n4);
    // printd(n4);
    // printf("\n");

    int n5 = -123;
    itoa_recursively(n5, s);
    printf("%d -> %s\n", n5, s);

    return 0;
}
