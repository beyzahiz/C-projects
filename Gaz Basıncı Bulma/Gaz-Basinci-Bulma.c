#include <stdio.h>

int main() {

    float basinc,r,sicaklik;
    r=0.82;
    int hacim,mol;
    
    printf("Sirasiyla kabin hacmini ve mol sayisini giriniz: ");
    scanf("%d%d",&hacim,&mol);
    printf("Sicaklik degerini giriniz:");
    scanf("%f",&sicaklik);
    
    basinc=(mol*r*sicaklik)/hacim;
    
    printf("Basinc degeri: %f\n",basinc);
    
    return 0;
}
