#include <stdio.h>
int main() {
    int arr[9], loc, val;  // increased size to 9
    printf("Enter 8 elements in the array: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered values are:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the location to insert the element (0-8): ");
    scanf("%d", &loc);

    printf("Enter the value to insert: ");
    scanf("%d", &val);

    // shift elements to the right
    for (int i = 8; i > loc; i--) {
        arr[i] = arr[i - 1];
    }

    arr[loc] = val;

    printf("Array after insertion:\n");
    for (int i = 0; i < 9; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
