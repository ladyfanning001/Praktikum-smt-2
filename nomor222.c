#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int isStrongNumber(int num) {
    int sum = 0;
    int originalNum = num;

    while (num > 0) {
        sum += factorial(num % 10);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    scanf("%d", &num);

    if (isStrongNumber(num)) {
        printf("KUAT\n");
    } else {
        printf("LEMAH\n");
    }

    return 0;
}
