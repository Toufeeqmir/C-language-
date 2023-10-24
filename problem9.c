#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    printf("Enter the value of n to calculate the Fibonacci series up to nth term: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to the %dth term:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
