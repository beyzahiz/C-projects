#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1; 
}

int main() {
    int sayi;

    printf("Bir sayı girin: ");
    scanf("%d", &sayi);

    if (isPrime(sayi)) {
        printf("%d asal bir sayıdır.\n", sayi);
    } else {
        printf("%d asal bir sayı değildir.\n", sayi);
    }

    return 0;
}
