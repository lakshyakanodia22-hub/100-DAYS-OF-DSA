#include <stdio.h>

int main() {
    int a[100], n, pos, i;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input position to delete (1-based)
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // Check if position is valid
    if(pos < 1 || pos > n) {
        printf("Invalid position\n");
    } else {
        // Shift elements to left
        for(i = pos - 1; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        n--;  // Reduce size of array

        // Print updated array
        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}