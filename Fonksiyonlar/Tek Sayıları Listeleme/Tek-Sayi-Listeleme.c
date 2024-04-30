#include <stdio.h>

void tekListele(int sayi){
    int i;
    for(i=0;i<=sayi;i++){
        if(i%2==1){
            printf("%d sayisi tektir.\n",i);
        }
    }
    
}

int main() {
    
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    tekListele(sayi);

    return 0;
}
