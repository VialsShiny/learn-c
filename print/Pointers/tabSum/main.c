#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "printa.h"

int main() {
  int tab[] = {10, 20, 30, 40, 50};
  int sum = 0;
  size_t length = sizeof(tab) / sizeof(tab[0]);

  int *p = tab;
  int *end = tab + length;

  while(p < end) {
    sum += *p;
    p++;
  }

  printa(tab, length);
  printf("%d\n", sum);
  system("PAUSE");
}