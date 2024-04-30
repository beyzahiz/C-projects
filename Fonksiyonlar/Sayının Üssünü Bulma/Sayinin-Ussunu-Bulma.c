#include <stdio.h>

int ussuBulma(int taban,int us){
    int i,j,sonuc=1;
    for(i=1;i<=us;i++){
        sonuc=taban*sonuc;
    }
    return sonuc;
}

int main()
{
    int taban,us;
    printf("Taban sayisini giriniz: ");
    scanf("%d",&taban);
    printf("Us sayisini giriniz: ");
    scanf("%d",&us);
    printf("Sonuc: %d",ussuBulma(taban,us));

    return 0;
}
