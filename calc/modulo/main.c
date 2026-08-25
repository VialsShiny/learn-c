#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define MIN 1
#define MAX 99

int main() {
  int i = 0;
  unsigned int number;
  int result[1] = {};

  printf("Entrez un nombre entre 1 et 99\n");
  number = getchar();
  while(number != EOF && number != '\n') {
    result[i] = number;
    i++;
  }

  for (size_t j = 0; j < sizeof(result) / sizeof(result[0]); j++) {
    printf("%d\n", result[j]);
  }
  
  system("PAUSE");
}
