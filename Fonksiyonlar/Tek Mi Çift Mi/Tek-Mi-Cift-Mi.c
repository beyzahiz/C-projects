#include <stdio.h>

void tekmiciftmi(int can)
{
    if(can%2==0)
    {
        printf("Sayi cift sayidir");
    }
    else
    {
        printf("Sayi tek sayidir");
    }
}

int main() {
    
    int n;
    printf("Bir sayi giriniz: ");
    scanf("%d",&n);
    tekmiciftmi(n);

    return 0;
}
