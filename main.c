//* gcc -o output main.c && output

#include "itoa.c"
#include "printd.c"
#include <math.h>
#include <stdio.h>

void itoa(int n, char s[]);

int main() {
    // char s[100];

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

    //* tests for recursive itoa():
    // int n5 = 123;
    // char s5[100];
    // itoa_recursively(n5, s5);
    // printf("\n%d -> %s = %s\n\n\n", n5, s5, (strcmp(s5, "123") ? "FALSE" : "TRUE"));

    // int n6 = 1234;
    // char s6[100];
    // itoa_recursively(n6, s6);
    // printf("\n%d -> %s = %s\n\n\n", n6, s6, (strcmp(s6, "1234") ? "FALSE" : "TRUE"));

    // int n7 = -123;
    // char s7[100];
    // itoa_recursively(n7, s7);
    // printf("\n%d -> %s = %s\n\n\n", n7, s7, (strcmp(s7, "-123") ? "FALSE" : "TRUE"));

    int n8 = -1234;
    char s8[100];
    itoa_recursively(n8, s8);
    printf("\n%d -> %s = %s\n\n\n", n8, s8, (strcmp(s8, "-1234") ? "FALSE" : "TRUE"));

    return 0;
}
