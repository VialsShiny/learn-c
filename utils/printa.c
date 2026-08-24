#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "printa.h"

// Use : gcc -Wall -Wextra -g3 -Iutils .\calc\countTab\main.c .\utils\printa.c -o .\calc\countTab\output\main.exe

void printa(int* tab, size_t length) {
  printf("{");
  for (size_t i = 0; i < length; i++) {
    if (i + 1 != length) {
      printf("'%d', ", tab[i]);
    } else {
      printf("'%d'", tab[i]);
    }
  };
  printf("}\n");
}
