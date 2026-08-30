#include <stdio.h>
#include <stdlib.h>

int increment(int *p) {
  (*p)++;
}

int main() {
  int number = 10;

  printf("Default : %d\n", number);
  increment(&number);
  printf("After Increment : %d\n", number);

  system("PAUSE");
}