#include <stdio.h>
#define MAX(number1,number2) (number1>number2)? number1:number2
#define MIN(number1,number2) (number1<number2)? number1:number2

int main() {
    
    int number1,number2;
    printf("İki sayı giriniz: ");
    scanf("%d%d",&number1,&number2);
    
    printf("MAX: %d\n",MAX(number1,number2));
    printf("MIN: %d\n",MIN(number1,number2));
    
    return 0;
}
