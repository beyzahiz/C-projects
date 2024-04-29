#include <stdio.h>

void faktoriyel(){
    int i,j,faktor=1;
    for(i=1;i<=10;i++){
        for(j=1;j<=i;j++){
            faktor=j*faktor;
        }
        printf("%d sayisinin faktoriyeli: %d\n",i,faktor);
        faktor=1;
    }
}

int main()
{
    faktoriyel();
    return 0;
}
