#include <stdio.h>

int main() {
    int a = 0, b = 1, n, result;

    printf("Enter a number to check if it's in the Fibonacci series: ");
    scanf("%d", &n);

    // If the number is 0 or 1, it is part of the Fibonacci series
    if (n == 0 || n == 1) {
        printf("%d is a Fibonacci number.\n", n);
        return 0;
    }

    // Loop to generate Fibonacci numbers until we find or surpass the given number
    while (b <= n) {
        if (b == n) {
            printf("%d is a Fibonacci number.\n", n);
            return 0;
        }
        result = a + b;
        a = b;
        b = result;
    }

    // If we exit the loop, the number is not a Fibonacci number
    printf("%d is not a Fibonacci number.\n", n);

    return 0;
}

