#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <math.h>

int checkPrimeNumber(int nbr) {
  if (nbr <= 1)
    return 0;

  int flag = 1;
  int squareRoot = sqrt(nbr);

  for (int i = 2; i <= squareRoot; i++) {
    if (nbr % i == 0) {
      flag = 0;
      break;
    }
  }

  return flag;
}

int main() {
  int number;
  int res = 0;

  do {
    printf("Choose a number between 1 - 999 : ");
    res = scanf(" %d", &number);
    if (!res) {
      printf("\nThis not a number\n");
      while ((res = getchar()) != '\n' && res != EOF) {}
      res = 0;
    } else {
      res = 1;
    }
  } while(!res);

  res = checkPrimeNumber(number);

  if (res) {
    printf("\n%d is a Prime Number !\n", number);
  } else {
    printf("\n%d isn't a Prime Number !\n", number);
  }

  return 0;
}