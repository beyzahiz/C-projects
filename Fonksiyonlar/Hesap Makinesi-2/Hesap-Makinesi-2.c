#include <stdio.h>

float islem(float sayi1,float sayi2,char isaret){
    
    if(isaret == '+'){
        printf("Sayilarin toplami: %.2f\n",(sayi1+sayi2));
    }
    else if(isaret == '-'){
        printf("Sayilarin çikarmasi: %.2f\n",(sayi1-sayi2));
    }
    else if(isaret == '*'){
        printf("Sayilarin carpimi:%.2f\n ",(sayi1*sayi2));
    }
    else if(isaret == '/'){
        printf("Sayilarin bolumu: %.2f\n",(sayi1/sayi2));
    }
    else{
        printf("Yanlis operator girdiniz.");
    }
    
}

int main() {
    
    float sayi1,sayi2;
    char isaret;
    printf("Bir islem seciniz: ");
    scanf("%c",&isaret);
    printf("İki sayi giriniz: ");
    scanf("%f%f",&sayi1,&sayi2);
    islem(sayi1,sayi2,isaret);
    
    
    return 0;
}
