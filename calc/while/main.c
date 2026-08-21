#include <stdio.h>
#include <stdlib.h>

#define MIN 0
#define MAX 300
#define INTER 20

int main() {
  float fahr;
  float celsus;
  fahr = MIN;
  while (fahr <= MAX) {
    celsus = (fahr - 32) * 5/9;
    printf("Fahr : %.0f\tCelsus : %.2f\n", fahr, celsus);
    fahr += INTER;
  }
  system("PAUSE");
}