#include <stdio.h>

int main() {
    
    void karakter(char x[]);
    char x[350];
    int i=0;
    
    printf("Cumle giriniz:(Cumle nokta ile sonlanmalı)\n");
    do{
        scanf("%c",&x[i]);
        i++;
    }while(x[i-1] != '.');
    karakter(x);
    
    return 0;
}
    
    void karakter(char x[]){
        int b,aCount=0,eCount=0;
        for (b=0; x[b]!='.'; b++) {
            if(x[b]=='A' || x[b]=='a')
                aCount++;
            if(x[b]=='E' || x[b]=='e')
                eCount++;
        }
        printf("A/a harfi: %d\n",aCount);
        printf("E/e harfi: %d\n",eCount);
    }
