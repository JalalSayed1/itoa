
#include <stdio.h>
#include <string.h>

void reverse(char s[]);

void reverse_recursively(char s[], int start, int end);

void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void reverse_recursively(char s[], int start, int end) {

    if (start >= end) {
        return;
    }

    int c;

    while (start < end) {
        c = s[start];
        s[start] = s[end];
        s[end] = c;

        start++;
        end--;

        if (start == end) {
            reverse_recursively(s, start, end);
        }
    }
}
