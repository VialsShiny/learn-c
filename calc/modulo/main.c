#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main() {
  char choice = 'o';
  int result;
  int number;

  printf("--- PAIR OU IMPAIR ---\n\n");
  while (choice == 'o') {
    printf("Veuillez entree un nombre compris entre 1 & 99 : ");
    result = scanf("%d", &number);  
    printf("\n");
    if (result) {
      if(number % 2 != 0) {
        printf("Impair : %d\n", number);
      } else {
        printf("Pair : %d\n", number);
      }
    } else {
      printf("Erreur : ce n'est pas un nombre !\n");
    }
    while(!result) {
      printf("Voulez-vous continuer ? (o/n) ");
      result = scanf("%c", &choice);
      printf("\n");
      if (result && choice != 'o' && choice != 'n') {
        result = 0;
        printf("Erreur : Veuillez choisir entre o/n !\n");
      } else {
        result = 1;
      }
    }
  }
  
  system("PAUSE");
}
