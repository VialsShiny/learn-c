#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int main() {
  int c;
  int i = 0;
  int words = 0;
  int sentence[MAX] = {0};

  c = getchar();
  while (c != EOF && i < MAX && c != '\n') {
    sentence[i] = c;
    c = getchar();
    i++;
  }

  int flag = 0;
  for (int j = 0; j < i; j++) {
    if (sentence[j] != ' ' && !flag) {
      words++;
      flag = 1;
    }

    if (sentence[j] == ' ') {
      flag = 0;
    }
  }

  printf("%d\n", words);
  system("PAUSE");
}