#include <stdio.h>

int main() {
    int a;
    int b;
    int result;

    printf("Enter the number:"); 
    scanf ("%d",&a);
    printf("Enter the number:");
    scanf ("%d",&b);
    
    result= a^b;
    printf("The OR operation is: %d",result);
}