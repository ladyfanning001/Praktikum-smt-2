#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

void cek(int num) {
    int sum = 0;
    int temp, reminder;

    temp = num;
    while (temp > 0) {
        reminder = temp % 10;
        sum += factorial(reminder);
        temp = temp / 10;
    }

    if (sum == num) {
        printf("KUAT\n");
    } else {
        printf("LEMAH\n");
    }
}

int main() {
    int num;
    printf("masukkan bilangan bulat: ");
    scanf("%d", &num);
    cek(num);
    return 0;
    
}