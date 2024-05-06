#include <stdio.h>

int main()
{
    int eleman,i;
    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&eleman);
    int dizi[eleman];
    
    for(i=0;i<eleman;i++){
        printf("%d. elemani giriniz: ",(i+1));
        scanf("%d",&dizi[i]);
    }
    
    int maks=dizi[0],ikinci=dizi[1];
        for(i=0;i<eleman;i++){
            if(dizi[i]>maks){
                ikinci=maks;
                maks=dizi[i];
            }
            else if(dizi[i]>ikinci && dizi[i]!=maks){
                ikinci=dizi[i];
            }
    }
    
    printf("\nDizinin en buyuk ikinci elemani: %d",ikinci);

    return 0;
}
