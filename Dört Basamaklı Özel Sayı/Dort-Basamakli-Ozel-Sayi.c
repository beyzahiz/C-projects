#include <stdio.h>

int main() {
 
    int sayi,toplam=0;
    printf("Dort basamakli bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    toplam=((sayi/100)+(sayi%100))*((sayi/100)+(sayi%100));

    if(sayi==toplam){
        printf("Girdiginiz sayi ozel sayidir");
    }
    else{
        printf("Girdiginiz sayi ozel sayi degildir");
    }
        
    return 0;
}
