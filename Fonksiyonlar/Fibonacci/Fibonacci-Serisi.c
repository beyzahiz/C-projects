#include <stdio.h>

void fibonacci(int sayi){
    int i,a=1,b=1,c=0;
    for(i=1;i<=sayi;i++){
        a=b;
        b=c;
        c=a+b;
        printf("%d\n",c);
    }
}

int main() {
    
    int sayi;
    printf("Fibonacci sayisi giriniz: ");
    scanf("%d", &sayi);
    fibonacci(sayi);

    return 0;
}
