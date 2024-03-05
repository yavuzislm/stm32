#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // Points to the first element of the array

    // Accessing array elements using pointers
    printf("First element: %d\n", *ptr);

    // Moving to the next element
    ptr++;
    printf("Second element: %d\n", *ptr);

    return 0;
}
