#include <stdio.h>

int main() {
    
    int number,i=1,max=0,min=0;
    printf("*** Sıfır girilince sonlanır ***\n\n");
    
    do{
        printf("%d. sayi: ",i);
        scanf("%d",&number);
        
        if(number==0) break;
        if(number<min) min=number;
        if(number>max) max=number;
        i++;
    }while(number!=0);
    
    printf("\nEn buyuk sayi: %d",max);
    printf("\nEn kucuk sayi: %d",min);
    return 0;
}
