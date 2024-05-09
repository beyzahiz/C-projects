#include <stdio.h>

int kupbul(int sayi){
    int sonuc=sayi*sayi*sayi;
    return sonuc;
}

int main() {
    int s;
    printf("Bir sayi giriniz: ");
    scanf("%d",&s);
    printf("Sayinin kubu: %d",kupbul(s));

    return 0;
}
