#include <stdio.h>

int main(void) {
    
    int a,b,i,ebob = 0;
    printf("Iki sayi giriniz: ");
    scanf("%d%d",&a,&b);
    for (i=1; i<=a && i<=b; i++) {
        if(a%i==0 && b%i==0){
            ebob=i;
        }
    }
    printf("Sayilarin Ebobu: %d",ebob);
    return 0;
}
