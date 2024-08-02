#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int isStrongNumber(int number) {
    int angka = number;
    int jumfaktorial = 0;

    while (number > 0) {
        int digit = number % 10;
        jumfaktorial += factorial(digit);
        number /= 10;
    }

    return jumfaktorial == angka;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isStrongNumber(n)) {
        printf("KUAT\n");
    } else {
        printf("LEMAH\n");
    }

    return 0;
}
