#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maksimum(int eleman,int dizi[]){
    int max=dizi[0],i;
    for (i=0; i<eleman; i++) {
        if(dizi[i]>max){
            max=dizi[i];
        }
    }
    return max;
}

int minimum(int eleman, int dizi[] ){
    int min=dizi[0],i;
        for (i=0; i<eleman; i++) {
        if(dizi[i]<min){
            min=dizi[i];
        }
    }
    return min;
}

int main() {
    int eleman,i;
    printf("Dizinin eleman sayisi giriniz: ");
    scanf("%d", &eleman);
    int dizi[eleman];
    srand(time(0));
    printf("Dizinin elemanları: \n");
    for (i=0; i<eleman; i++) {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    
    int Minimum = minimum(eleman,dizi);
    int Maksimum = maksimum(eleman,dizi);
    
    printf("Minimum elemanı: %d\n",Minimum);
    printf("Maksimum elemanı: %d\n",Maksimum);
    
    return 0;
}
