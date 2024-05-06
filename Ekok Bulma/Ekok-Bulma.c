#include <stdio.h>

int main() {
    
    int a,b,i,ekok;
    printf("Iki sayi giriniz: ");
    scanf("%d%d",&a,&b);
    
    for (i=a*b; i>0; i--) {
        if(i%a==0 && i%b==0){
            ekok=i;
        }
    }
    printf("Sayilarin Ekoku: %d",ekok);
    return 0;
}
