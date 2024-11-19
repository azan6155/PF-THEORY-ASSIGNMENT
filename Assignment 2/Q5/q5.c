#include <stdio.h>

// Function to print the horizontal histogram
void print_horizontal_histogram(int values[], int count) {
	int i = 0, j = 0;
    for ( i = 0; i < count; i++) {
        printf("Value %d: ", i + 1);
        for ( j = 0; j < values[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// Function to print the vertical histogram
void print_vertical_histogram(int values[], int count) {
    // Find the maximum value in the array
    int max_value = values[0];
    int i = 1;
    for ( i = 1; i < count; i++) {
        if (values[i] > max_value) {
            max_value = values[i];
        }
    }

    // Print from the top to bottom row
    for (i = max_value; i > 0; i--) {
    	int j = 0;
        for ( j = 0; j < count; j++) {
            if (values[j] >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    // Print the values at the bottom
    for (i = 0; i < count; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main() {
    // Example input
    int values[] = {3, 5, 1, 4};
    int count = sizeof(values) / sizeof(values[0]);

    // Print horizontal histogram
    printf("Horizontal Histogram\n");
    print_horizontal_histogram(values, count);

    // Print vertical histogram
    printf("\nVertical Histogram\n");
    print_vertical_histogram(values, count);

    return 0;
}
