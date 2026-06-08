#include <stdio.h>
#include <stdlib.h>


long long fibonacci(int n) {
    if (n == 0) return 0;   
    if (n == 1) return 1;   
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int main() {
    int terms;

    printf("Enter the number of terms (0 to 50 recommended): ");
    if (scanf("%d", &terms) != 1 || terms < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }


    if (terms > 50) {
        printf("Warning: Large values may cause slow execution or overflow.\n");
    }

    printf("Fibonacci Series (%d terms):\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%lld ", fibonacci(i));
    }
    printf("\n");

    return 0;
}



