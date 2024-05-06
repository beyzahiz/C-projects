#include <stdio.h>

int main() {
    int i,j,satir;
    printf("Dizinin satir sayisini giriniz: ");
    scanf("%d",&satir);
    int matrix[satir][satir];
    for (i=0; i<satir; i++) {
        for (j=0; j<satir; j++) {
            matrix[i][j]=0;
        }
    }
    for (i=0; i<satir; i++) {
        matrix[i][i]=1;
        matrix[i][satir-i-1]=1;
    }
    for (i=0; i<satir; i++) {
        for (j=0; j<satir; j++) {
            printf("%4d",matrix[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
