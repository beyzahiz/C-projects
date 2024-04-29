#include <stdio.h>

float islem(float sayi1,float sayi2,char isaret){
    if(isaret == '+'){
        return sayi1+sayi2;
    }
    else if(isaret == '-'){
        return sayi1-sayi2;
    }
    else if(isaret == '*'){
        return sayi1*sayi2;
    }
    else if(isaret == '/'){
        return sayi1/sayi2;
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
    
    printf("İslemin sonucu: %.2f",islem(sayi1,sayi2,isaret));
    
    return 0;
}
