#include <stdio.h>
#include <stdlib.h>

int main() {
  int number = 10;

  int *n = &number;
  *n = 20;
  printf("%d\n", number);
  printf("%d\n", *n);
  system("PAUSE");
}