#include <stdio.h>

int main() {
    int a,sum=0,b;
    printf("Bir sayi giriniz: ");
    scanf("%d",&a);
    
    while (a>0) {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("Basamaktaki sayilarin toplami: %d\n",sum);
    return 0;
}
