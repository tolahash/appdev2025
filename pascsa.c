#include <stdio.h>

// factorial function
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    long long f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

// declined Pascal triangle
void declined_pascal(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("%3lld", n_choose_k(i + j, i));
        }
        printf("\n");
    }
}
