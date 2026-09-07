#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

void getNumber(int *n1, int *n2) {
  int flag = 0;

  do {
    int c;
    if (*n1 != false) {
      printf("Choose exponent number : ");
      c = scanf(" %d", n2);
    } else {
      printf("Choose base number : ");
      c = scanf(" %d", n1);
    }

    if (!c) {
      flag = 0;
      printf("\nThis is not a number !\n");
      while ((c = getchar()) != '\n' && c != EOF) {}
    }

    if (*n1 != false && *n2 != false) {
      flag = 1;
    }
  } while(!flag);
}

int power(int *base, int *exponent, int *result) {
  *result = 1;

  for (size_t i = 0; i < *exponent; i++) {
    *result = *result * *base;
  }

  printf("\n%d\n", *result);
}

int main() {
  int result;
  int n1 = false;
  int n2 = false;

  getNumber(&n1, &n2);
  power(&n1, &n2, &result);

  printf("\n%d ^ %d = %d", n1, n2, result);
  
  return 0;
}