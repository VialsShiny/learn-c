#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void print_array(int* tab, int length) {
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

int main() {
  int tab[] = {15, 36, 59, 45}; // 155
  size_t length = sizeof(tab) / sizeof(tab[0]);
  int total = 0;
  for (size_t i = 0; i < length; i++) {
    total += tab[i];
  }
  
  print_array(tab, length);
  printf("Result : %d\n", total);
  system("PAUSE");
}