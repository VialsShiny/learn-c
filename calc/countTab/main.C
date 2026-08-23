#include <stdio.h>
#include <stdlib.h>

int main() {
  int tab[100] = {15, 36, 59, 45}; // 155
  int total = 0;
  for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); i++) {
    total += tab[i];
  }
  printf("%d\n", total);
  system("PAUSE");
}