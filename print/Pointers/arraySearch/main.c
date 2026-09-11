#include <stdio.h>
#include <stdlib.h>
#include "printa.h"

// Use : gcc -Wall -Wextra -g3 -Iutils .\print\pointers\arraySearch\main.c .\utils\printa.c -o .\print\pointers\arraySearch\output\main.exe

const int DEFAULT[] = {10, 42, 7, 25, 99};
const int length = sizeof(DEFAULT) / sizeof(DEFAULT[0]);

int find(int *tab, int *flag, size_t length, int chosenNbr, int *index) {
  for (size_t i = 0; i < length; i++) {
    if (tab[i] == chosenNbr) {
      *flag = 1;
      *index = i;
    }      
  }
}

int main() {
  int c;
  int flag = 0;
  int chosenNbr;
  int index = 0;

  printf("Choose a Number :\n");
  printa(DEFAULT, length);
  printf("\n---\n\n");

  do {
    c = scanf(" %d", &chosenNbr);

    if (!c) {
      while ((c = getchar()) != '\n' && c != EOF) {}
      printf("\nThis is not a number, retry...\n");
      flag = 0;
    } else {
      find(DEFAULT, &flag, length, chosenNbr, &index);
      if (!flag) {
        printf("\nYou didn't choose a number in the Object, retry...\n");
      }
    }
  } while (!flag);

  printf("\nThe Index of the chosen number is : %d", index);
}