#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

int checkPrimeNumber(int nbr) {
  double squareRoot = sqrt(nbr);
  int flag = 0;

  if (nbr <= 1)
    flag = 0;

  for (size_t i = 2; i < squareRoot; i++) {
    if (nbr % i == 0) {
      flag = 0;
      break;
    }
    
    flag = 1;
  }

  return flag;
}

int main() {
  printf("Here i'm coding !");
  return 0;
}