#include <stdio.h>

int main() {
  int sayi, i, j, k;

  printf("Bir sayi girin: ");
  scanf("%d", &sayi);

  for (i=sayi; i>=1; i--) {
    for (j=i; j<sayi; j++) {
      printf(" ");
    }
    for (k=1; k<=i*2-1; k++) {
      printf("*");
    }
    printf("\n");
  }

  for (i=2; i<=sayi; i++) {
    for (j=sayi; j>i; j--) {
      printf(" ");
    }
    for (k=i*2-1; k>=1; k--) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
