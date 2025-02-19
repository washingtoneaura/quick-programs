#include <stdio.h>

void calculate_simple_interest(float principal, float time, float rate) {
    float simple_interest = (principal * time * rate) / 100;
    printf("Simple Interest: %.2f\n", simple_interest);
}

int main() {
    float principal, time, rate;

    // Display heading
    printf("========================================\n");
    printf("        SIMPLE INTEREST CALCULATOR      \n");
    printf("========================================\n");

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    calculate_simple_interest(principal, time, rate);

    return 0;
}
