#include <stdio.h>

void bastir(int matris[3][4])
{
    int i,j;
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int i,j;
    int dizi[3][4];
    printf("Dizinin elemanlarinin giriniz: ");
    
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            scanf("%d",&dizi[i][j]);
        }
    }
    
    bastir(dizi);
    
  return 0;
}
