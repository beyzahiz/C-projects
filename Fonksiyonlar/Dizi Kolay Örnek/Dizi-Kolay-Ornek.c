#include <stdio.h>

void butunsayilar(int sayilar[6]){
    for (int i=0; i<6; i++) {
        printf("%d\n",sayilar[i]);
    }
}

int main() {

    int sayilar[6]={10,20,30,40,50,60};
    butunsayilar(sayilar);
    
    return 0;
}
