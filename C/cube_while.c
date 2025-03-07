#include <stdio.h>

int main() {
    int n, i = 1;

    // Asking for user input
    printf("Input number of terms: ");
    scanf("%d", &n);

    // Using while loop
    while (i <= n) {
        printf("Number is: %d and cube of the %d is: %d\n", i, i, i * i * i);
        i++;
    }

    return 0;
}
