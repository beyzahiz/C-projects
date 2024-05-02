#include <stdio.h>

float FdenCye(float f)
{
    return (0.5555)*(f-32);
}
float CdenFye(float c)
{
    return (1.8*c)+32;
}

int main() {

    float f,c;
    int secim;
    printf("1 Fahrenayt => Celcius\n");
    printf("2 Celcius => Fahrenayt\n");
    printf("Bir secim yapiniz: ");
    scanf("%d",&secim);
    if(secim==1)
    {
        printf("Fahrenayt degerini giriniz: ");
        scanf("%f",&f);
        printf("%f F = %f C dir\n",f,FdenCye(f));
    }
    else if(secim==2)
    {
        printf("Celcius degerini giriniz: ");
        scanf("%f",&c);
        printf("%f C = %f F dir\n",c,CdenFye(c));
    }
    else
    {
        printf("Yanlis secim yaptiniz");
    }
    
    return 0;
}
