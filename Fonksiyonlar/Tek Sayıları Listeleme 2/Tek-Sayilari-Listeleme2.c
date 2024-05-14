#include <stdio.h>

void teksayilar(int n){
    int i=0;
    while(i<=n){
        if(i%2==1){
            printf("%d\n",i);
        }
        i++;
    }
}

int main() {

    int sayi;
    printf("Bir pozitif sayi giriniz: ");
    scanf("%d",&sayi);
    teksayilar(sayi);
    
    return 0;
}
