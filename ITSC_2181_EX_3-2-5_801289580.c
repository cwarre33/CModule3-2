#include <stdio.h> 

int main(void) {
    float numbers[5];
    float sum = 0.0, average;

    printf("Enter 5 float numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &numbers[i]);  // Read float input from the user
    }

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];  // Calculate sum
    }

    average = sum /5;

    printf("Sum of the numbers: %.2f\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}