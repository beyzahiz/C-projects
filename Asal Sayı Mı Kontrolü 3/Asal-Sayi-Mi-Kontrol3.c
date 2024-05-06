#include <stdio.h>

int main() {
    
    int sayi,i,count=0;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    for (i=1; i<=sayi; i++) {
        if(sayi%i==0){
            count++;
        }
    }
    if(count==2){
        printf("%d sayisi asal sayidir",sayi);
    }
    else{
        printf("%d sayisi asal sayi degildir",sayi);
    }
    
    return 0;
}
