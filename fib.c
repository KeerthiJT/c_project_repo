#include <stdio.h>

void generateFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (int i = 1; i <= n-2; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        printf("%d, ", nextTerm);
    }
    printf("\n");
}

// int main()
void fib() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("The number of terms should be at least 2.\n");
    } else {
        generateFibonacci(n);
    }

    return 0;
}

