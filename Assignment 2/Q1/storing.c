#include <stdio.h>
int main() {
    int arr[5], i, smallest, second_smallest;
    printf("Enter 5 elements (value < 9999)");// Taking input pf 5 elements for the array
    for (i = 0;i < 5; i++) { //looping through the array
        do {
            printf("element - %d: ", i);
            scanf("%d", &arr[i]);
            if (arr[i] >= 9999) {
                printf("Try again.\n");
            }
        } while (arr[i] >= 9999);
    }
    if (arr[0] < arr[1]) { // Initialize smallest and second smallest
        smallest = arr[0];
        second_smallest = arr[1];
    } else {
        smallest = arr[1];
        second_smallest = arr[0];
    }
    for (i = 2; i < 5; i++) { // Looping to find the second smallest element
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    printf("The Second smallest element in the array is: %d\n", second_smallest);  // Output the second smallest element

    return 0;
}
