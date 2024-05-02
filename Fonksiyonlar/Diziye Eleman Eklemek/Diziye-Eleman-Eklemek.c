#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ekle(int dizi[],int sirano,int deger,int elemansayisi){
    int i;
    if(sirano<=elemansayisi)
    {
        for (i=elemansayisi-1; i>=sirano-1; i--)
        {
            dizi[i+1]=dizi[i];
        }
        dizi[sirano-1]=deger;
        
        printf("Diziye eklenmis hali: \n");
        for (i=0; i<=elemansayisi; i++)
        {
                printf("%4d",dizi[i]);
        }
    }
    else
    {
        printf("Hatali sira numarasi girdiniz\n");
    }
}

int main() {

    int n,i;
    int sira,sayi;
    printf("Kac adet sayi uretilecek?: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for (i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
    }
    for (i=0; i<n; i++)
    {
        printf("%4d",dizi[i]);
    }
    printf("\nHangi siraya eleman eklenecek?: ");
    scanf("%d",&sira);
    printf("Eklenecek sayi nedir?: ");
    scanf("%d",&sayi);
    
    ekle(dizi,sira,sayi,n);
    
    return 0;
}
