#include <stdio.h>
#define PI 3.14

void hesapla(float yaricap){
    float alan,cevre;
    alan=PI*yaricap*yaricap;
    cevre=2*PI*yaricap;
    printf("Dairenin alani: %.4f\n");
    printf("Dairenin cevresi: %.2f\n");
}

int main() {
    
    float yaricap;
    printf("Yaricap degerini giriniz: ");
    scanf("%f",&yaricap);
    hesapla(yaricap);
    
    return 0;
}
