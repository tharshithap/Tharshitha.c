#include <stdio.h>

int main() {
    int days;

    // Input: Number of days
    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculate odd days
    int odd_days = days % 7;

    // Output the result
    printf("There are %d odd days in %d days.\n", odd_days, days);

    return 0;
}
