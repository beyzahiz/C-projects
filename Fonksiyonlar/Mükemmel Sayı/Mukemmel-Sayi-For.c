#include <stdio.h>

int mukemmel(int sayi){
    int i,sayac=0;
    for(i=1; i<sayi; i++){
        if(sayi%i == 0){
            sayac=i+sayac;
        }
    }
    return sayac;
}


int main() {
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    int sonuc= mukemmel(sayi);
    
    if(sonuc==sayi){
        printf("Girdiginiz sayi mukemmeldir");
    }
    else{
        printf("Muko degil");
    }
    return 0;
}
