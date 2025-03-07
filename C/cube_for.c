#include <stdio.h>

int main() {
    int n, i;

    // Asking for user input
    printf("Input number of terms: ");
    scanf("%d", &n);

    // Using for loop
    for (i = 1; i <= n; i++) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
    }

    return 0;
}
