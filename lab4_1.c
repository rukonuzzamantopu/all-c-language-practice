#include <stdio.h>

int main() {
    char alphabet;
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++) {
        printf("%c ", alphabet);
    }
    printf("\n");
    for (alphabet = 'A'; alphabet <= 'Z'; alphabet++) {
        printf("%c ", alphabet);
    }
    return 0;
}
 