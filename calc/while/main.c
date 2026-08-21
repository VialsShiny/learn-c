#include <stdio.h>
#include <stdlib.h>

int main() {
  float fahr;
  float celsus;
  int min, max, interval;
  min = 0;
  max = 300;
  interval = 20;
  fahr = min;

  while (fahr <= max) {
    celsus = (fahr - 32) * 5/9;
    printf("Fahr : %.0f\tCelsus : %.2f\n", fahr, celsus);
    fahr += interval;
  }
  system("PAUSE");
}