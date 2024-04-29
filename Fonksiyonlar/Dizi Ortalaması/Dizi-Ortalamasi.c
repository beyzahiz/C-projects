#include <stdio.h>

void ortalama(int toplam,int eleman){
    int ort;
    
    ort=toplam/eleman;
    printf("Sayilarin ortalamasi: %d",ort);
}


int main()
{
    int eleman;
    printf("Eleman sayisini giriniz: ");
    scanf("%d",&eleman);
    int dizi[eleman],i,toplam=0;
    for(i=0;i<eleman;i++){
        printf("Dizinin %d. elemanini giriniz: ",i+1);
        scanf("%d",&dizi[i]);
        toplam=dizi[i]+toplam;
    }
    ortalama(toplam,eleman);
   
    return 0;
}
