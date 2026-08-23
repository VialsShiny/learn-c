#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main() {
  int tab[100] = {15, 36, 59, 45}; // 155
  size_t length = sizeof(tab) / sizeof(tab[0]);
  int total = 0;
  for (size_t i = 0; i < length; i++) {
    total += tab[i];
  }
  
  printf("%d\n", total);
  system("PAUSE");
}