
#include <stdio.h>

int main() {
    int units[30];
    int sum = 0;
    float average;

    // Automatically fill array using a loop
    for (int i = 0; i < 30; i++) {
        units[i] = 10 + i % 11;   // values will repeat between 10 to 20
    }

    // Calculate sum
    for (int i = 0; i < 30; i++) {
        sum += units[i];
    }

    // Calculate average
    average = sum / 30.0;

    // Print values
    printf("Auto-generated units for 30 days:\n");
    for (int i = 0; i < 30; i++) {
        printf("Day %2d: %d units\n", i + 1, units[i]);
    }

    printf("\nTotal: %d units\n", sum);
    printf("Average: %.2f units\n", average);

    return 0;
}
