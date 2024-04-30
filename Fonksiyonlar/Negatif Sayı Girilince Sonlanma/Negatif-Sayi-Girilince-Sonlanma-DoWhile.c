#include <stdio.h>

void sayiIste() {
    int sayi;

    do {
        printf("Bir sayi giriniz: ");
        scanf("%d", &sayi);

        if (sayi < 0) {
            printf("Negatif sayi girdiniz. Program sonlandiriliyor.\n");
        }
    } while (sayi >= 0);
}


int main() {
    
    sayiIste();

    return 0;
}
