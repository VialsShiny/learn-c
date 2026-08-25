#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main() {
  int result;
  int number;

  printf("--- PAIR OU IMPAIR ---\n\n");
  printf("Veuillez entree un nombre compris entre 1 & 99 : ");
  result = scanf("%d", &number);  
  if (result) {
    if(number % 2 != 0) {
      printf("Impair : %d\n", number);
    } else {
      printf("Pair : %d\n", number);
    }
  } else {
    printf("Erreur : ce n'est pas un nombre !\n");
  }

  system("PAUSE");
}
