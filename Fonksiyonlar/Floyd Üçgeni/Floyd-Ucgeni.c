#include <stdio.h>

void floyd(int satir) {
    int i, j, sayi = 1;
    for (i=1; i<=satir; i++) {
        for (j=1; j<=i; j++) {
            printf("%d ", sayi);
            sayi++;
        }
        printf("\n");
    }
}

int main() {
    int satir;
    printf("Floyd ucgeni satir sayisi giriniz: ");
    scanf("%d", &satir);
    floyd(satir);

    return 0;
}
