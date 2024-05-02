#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void kayitsil(int dizi[],int sira,int elemansayisi){
    int i;
    if(sira>elemansayisi)
    {
        printf("Gecerli bir sira numarasi giriniz\n");
    }
    else
    {
        for (i=sira-1; i<elemansayisi-1; i++)
        {
            dizi[i]=dizi[i+1];
        }
        printf("Kayit silindikten sonraki durum: \n");
        for (i=0; i<elemansayisi-1; i++) {
            printf("%4d",dizi[i]);
        }
    }
}

int main() {

    int n,i;
    int sirano;
    printf("Kac adet sayi uretilecek?: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for (i=0; i<n; i++) {
        dizi[i]=rand()%100;
        printf("%4d",dizi[i]);
    }
    printf("\nSilinecek degerin sira numarasini giriniz: ");
    scanf("%d",&sirano);
    kayitsil(dizi,sirano,n);
    
    return 0;
}
