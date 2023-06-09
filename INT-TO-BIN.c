#include <stdio.h>

void printBinary(unsigned int n) {
    for (int i = 4; i >= 0; i--)
        printf("%d", (n >> i) & 1);
}

int main() {
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u", &n);
    printBinary(n);
    printf("\n");
    return 0;
}