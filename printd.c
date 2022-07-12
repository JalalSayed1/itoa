#include <stdio.h>

void printd(int n);

/**
 * @brief Convert an integer to a string and print it recursively.
 *
 * @param n The integer to convert and print.
 */
void printd(int n) {

    if (n < 0) {
        putchar('-');
        n = -n; // make n positive
    }

    // print the digits of n recursively:
    if (n / 10) {
        printd(n / 10);
    }
    // get the char of the last digit:
    putchar(n % 10 + '0');
}
