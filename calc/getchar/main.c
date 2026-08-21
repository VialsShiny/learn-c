#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
  int c;
  int i = 0;
  int message[MAX] = {0};

  c = getchar();
  while (c != EOF && c != '\n' && i < MAX) {
    message[i] = c;
    c = getchar();
    i++;
  }
  for (int j = 0; j < i; j++) {
    if (j == 0)
      printf("Bonjour : ");
    printf("%c", message[j]);
  }
  printf(" !\n");
  system("PAUSE");
}