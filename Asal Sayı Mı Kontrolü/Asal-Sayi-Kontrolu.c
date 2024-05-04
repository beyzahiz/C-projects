#include <stdio.h>

int main() {
    
    int number=0,i=2;
    printf("Bir sayi giriniz: ");
    scanf("%d",&number);
    
    if(number<0){
        printf("Lutfen pozitif bir sayi giriniz\n");
        return 0;
    }
    
    while (i<=number/2) {
        if(number%i==0){
            printf("%d sayisi %d ye bolundugu icin asal sayi olamaz",number,i);
            return 0;
        }
        i++;
    }
    printf("%d sayisi asal sayidir",number);
    return 0;
}
