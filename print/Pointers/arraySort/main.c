#include <stdio.h>
#include <stdlib.h>
#include "printa.h"

// Use : gcc -Wall -Wextra -g3 -Iutils .\print\pointers\arraySort\main.c .\utils\printa.c -o .\print\pointers\arraySort\output\main.exe

void sort(int *tab, size_t length) {
  for (size_t i = 0; i < length; i++) {
    for (size_t j = 0; j < length - 1; j++) {
      int o = tab[j];
      int n = tab[j + 1];

      if (o > n) {
        tab[j] = n;
        tab[j + 1] = o;
      }
    }
  }
}

int main() {
  int DEFAULT[] = {7, 2, 9, 1, 5};
  size_t length = sizeof(DEFAULT) / sizeof(DEFAULT[0]);

  printa(DEFAULT, length);
  sort(DEFAULT, length);
  printa(DEFAULT, length);
}