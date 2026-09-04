#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define MAX 99;
#define MIN 3;

void factorial(int n) {
  int result = n;
  for (int i = n - 1; i >= 1; i--) {
    result *= i;
  }
  printf("\nResult : %d\n", result);
}

int main() {
  int number;
  int flag = 0;

  do {
    int c;
    printf("Choose a number (3-10) : ");
    c = scanf(" %d", &number);

    if (!c) {
      while ((c = getchar()) != '\n' && c != EOF) {}
      printf("\n This not a number, retry...\n");
      flag = 0;
    } else {
      printf("\n%d\n", number);
      flag = 1;
    }
  } while(!flag);

  factorial(number);
  return 0;
}