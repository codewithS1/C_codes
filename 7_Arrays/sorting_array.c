#include <stdio.h>

int main() {
    int a[10] = {10, 25, 56, 45, 99, 145, 14, 1, 151, 10}; // Given array
    int array[10]; // Array to store smallest elements
    int loop; // Loop variable

    // Iterate through each element of a
    for (loop = 0; loop < 10; loop++) {
        int smallest = a[0]; // Initialize smallest with first element of a

        // Find the smallest element in a
        for (int i = 1; i < 10; i++) {
            if (a[i] < smallest) {
                smallest = a[i];
            }
        }

        // Store the smallest element in array
        array[loop] = smallest;

        // Subtract the smallest element from each element of a
        for (int i = 0; i < 10; i++) {
            if (a[i] == smallest) {
                a[i] = 9999; // Assigning a large value to effectively ignore this element in subsequent iterations
                break; // Break after first occurrence of smallest element
            }
        }
    }

    // Print the array of smallest elements
    printf("Array of smallest elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
