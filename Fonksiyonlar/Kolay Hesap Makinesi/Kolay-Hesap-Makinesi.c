#include <stdio.h>

void fonksiyon(int sayi1,int sayi2){
    
    int toplama=sayi1+sayi2;
    printf("Toplama: %d\n",toplama);
    int cikarma=sayi1-sayi2;
    int carpma=sayi1*sayi2;
    int bolme=sayi1/sayi2;
    printf("Cikarma: %d\n",cikarma);
    printf("Carpma: %d\n",carpma);
    printf("Bolme: %d\n",bolme);
    
}

int main() {
    
    int sayi1,sayi2;
    printf("İki sayi giriniz: ");
    scanf("%d%d",&sayi1,&sayi2);
    fonksiyon(sayi1,sayi2);
    
    return 0;
}
