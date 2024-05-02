#include <stdio.h>

void bolmeislemi(int bolunen, int bolen)
{
    int kalan,bolum;
    kalan=bolunen%bolen;
    bolum=bolunen/bolen;
    printf("Kalan: %d ve Bolum: %d",kalan,bolum);
}

int main() {

    int bolunen,bolen;
    printf("Sirasiyla bolunen ve bolen sayiyi giriniz: ");
    scanf("%d%d",&bolunen,&bolen);
    bolmeislemi(bolunen,bolen);
    
    return 0;
}
