#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int isArmstrong(int n, int p) {
    if (n == 0)
        return 0;
    return pow(n % 10, p) + isArmstrong(n / 10, p);
}

int main() {
    int n, digits, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    digits = countDigits(n);
    sum = isArmstrong(n, digits);
    if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);
    return 0;
}

