#include <stdio.h>

int main() {
    int n, i;
    // unsigned long long is used for large results
    unsigned long long fact = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

  
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            fact *= i; 
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}