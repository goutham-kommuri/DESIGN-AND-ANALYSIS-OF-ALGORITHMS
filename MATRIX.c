#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int timeComplexity = r1 * c1 * c2;
    printf("Time complexity for matrix multiplication is O(%d)\n", timeComplexity);
    return 0;
}

