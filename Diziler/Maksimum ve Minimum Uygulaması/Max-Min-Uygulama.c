#include <stdio.h>

int main() {
    
    int i,a,n,max=0,min=100,biggest,small;
    printf("Sinif kac kisi?: ");
    scanf("%d",&n);
    
    int numara[n], not[n];
    for (i=0; i<n; i++) {
        printf("Ogrencilerin numaralarini ve notlarini giriniz: ");
        scanf("%d%d",&numara[i],&not[i]);
    }
    
    for (i=0; i<n; i++) {
        if(not[i]>max){
            max=not[i];
            biggest=i;
        }
        if(not[i]<min){
            min=not[i];
            small=i;
        }
    }
    
    printf("\n%d numarali ogrenci en dusuk (%d) notu almistir",numara[small],min);
    printf("\n%d numarali ogrenci en yuksek (%d) notu almistir",numara[biggest],max);
    return 0;
}
