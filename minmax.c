#include <stdio.h>

// Structure to store both max and min
struct Pair {
    int min;
    int max;
};

// Function to find the minimum and maximum of the array
struct Pair findMinMax(int arr[], int low, int high) {
    struct Pair minmax, left, right;
    int mid;

    // If the array has only one element
    if (low == high) {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }

    // If the array has two elements
    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            minmax.max = arr[low];
            minmax.min = arr[high];
        } else {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    // If the array has more than two elements, divide the array
    mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);

    // Compare the results from both halves to get the final min and max
    if (left.min < right.min)
        minmax.min = left.min;
    else
        minmax.min = right.min;

    if (left.max > right.max)
        minmax.max = left.max;
    else
        minmax.max = right.max;

    return minmax;
}

int main() {
    int arr[] = {100, 34, 56, 23, 1, 78, 89, 20, 13, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    struct Pair minmax = findMinMax(arr, 0, n - 1);

    printf("Minimum element is: %d\n", minmax.min);
    printf("Maximum element is: %d\n", minmax.max);

    return 0;
}

