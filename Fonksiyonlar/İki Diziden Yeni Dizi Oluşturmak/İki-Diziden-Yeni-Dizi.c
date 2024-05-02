#include <stdio.h>

void birlestir(int A[],int B[],int C[],int N,int K)
{
    int i,j,sayac=0;
    for (i=0; i<N; i++) {
        C[sayac]=A[i];
        sayac++;
    }
    for (j=0; j<K; j++) {
        C[sayac]=B[j];
        sayac++;
    }
}

int main(int argc, const char * argv[]) {

    int K,N,i;
    printf("İlk dizinin eleman sayisini giriniz: ");
    scanf("%d",&N);
    int A[N];
    for (i=0; i<N; i++) {
        printf("%d. sayi: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("İkinci dizinin eleman sayisini giriniz: ");
    scanf("%d",&K);
    int B[N];
    for (i=0; i<K; i++) {
        printf("%d. sayi: ",i+1);
        scanf("%d",&B[i]);
    }
    int birlesik[N+K];
    birlestir(A,B,birlesik,N,K);
    
    for (i=0; i<N+K; i++) {
        printf("%4d",birlesik[i]);
    }

    
    return 0;
}
