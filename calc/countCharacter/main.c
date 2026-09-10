#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main() {
  int c;
  int i = 0;
  int letters = 0;
  int spaces = 0;
  int digits = 0;
  int vowels = 0;
  int sentence[MAX] = {0};

  c = getchar();
  while (c != EOF && i < MAX && c != '\n') {
    sentence[i] = c;
    c = getchar();
    i++;
  }

  for (int j = 0; j < i; j++) {
    if (sentence[j] != ' ') {
      if (sentence[j] >= '0' && sentence[j] <= '9') {
        digits++;
      } else {
        if (strchr("aeiouyAEIOUY", sentence[j]) != NULL) {
          vowels++;
        } else {
          letters++;
        }
      }
    }

    if (sentence[j] == ' ') {
      spaces++;
    }
  }

  printf("Letters : %d\n", letters);
  printf("Vowels : %d\n", vowels);
  printf("Spaces : %d\n", spaces);
  printf("Digits : %d\n", digits);
}