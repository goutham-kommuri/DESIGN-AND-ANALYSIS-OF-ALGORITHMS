#include <stdio.h>
#include <stdlib.h>  // For malloc() and free()

int findLargest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Largest element: %d\n", findLargest(arr, n));

    // Free allocated memory
    free(arr);
    return 0;
}

