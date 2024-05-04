#include <stdio.h>
 
int main() {
    int sayi;
    int sayac = 0;
    
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for(int i = 2; i < sayi; i++)
    {
        if(sayi % i == 0){
            sayac++;     // eger sayimizi tam bölen sayı varsa sayacı arttırıyoruz..
        }
    }
    if(sayac == 0){
        printf("%d Sayisi asal bir sayidir.",sayi);
    }
    else{
        printf("%d Sayisi asal bir sayi degildir.",sayi);
    }
    
    return 0;
}
