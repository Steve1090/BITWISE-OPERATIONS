#include <stdio.h>

int main() {
    int num;
    int count = 0;
    
    printf("Enter an integer number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    
    printf("The number of 1s in the entered integer is: %d\n", count);
    
    return 0;
}