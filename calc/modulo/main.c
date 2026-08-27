#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define MIN 1
#define MAX 999

int main() {
  char choice = 'o';
  int result;
  int number;

  printf("--- PAIR OU IMPAIR ---\n\n");
  while (choice == 'o') {
    printf("Veuillez entree un nombre compris entre 1 & 999 : ");
    result = scanf(" %d", &number);  
    if (result) {
      printf("\n");
      if (number < MIN || number > MAX) {
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
          c = getchar();
        }
        printf("Erreur : Ce nombre n'est pas compris entre 1 & 999 !\n");
      } else {
        if(number % 2 != 0) {
          printf("Impair : %d\n", number);
        } else {
          printf("Pair : %d\n", number);
        }
      }
    } else {
      int c;
      while ((c = getchar()) != '\n' && c != EOF) {
        c = getchar();
      }
      printf("Erreur : Ce n'est pas un nombre !\n");
    }
    result = 0;
    while(!result) {
      printf("Voulez-vous continuer ? (o/n) ");
      result = scanf(" %c", &choice);
      if (result && choice != 'o' && choice != 'n') {
        printf("\n");
        result = 0;
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {
          c = getchar();
        }
        printf("Erreur : Veuillez choisir entre o/n !\n");
      } else {
        result = 1;
      }
    }
  }
  
  system("PAUSE");
}
