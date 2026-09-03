#include <stdio.h>
#include <stdlib.h>
// #include <stddef.h>
#include <stdbool.h>

int askForNumbers(int *nbr, int step) {
  int tempNbr;
  int result;
  int flag = 0;

  if (step != 1 && step != 2) {
    printf("Wrong Step\n");
    return false;
  }

  do {
    printf("First number : ");
    result = scanf(" %d", &tempNbr);
    if (result) {
      *nbr = tempNbr;
      flag = 1;
    } else {
      printf("\nWrong Input!\n");
      int c;
      while ((c = getchar()) != '\n' && c != EOF) {}
      flag = 0;
    }
  } while(!flag);
}

int operation() {
  int flag = 0;
  char operator;
  do {
    printf("Operator (+ - * / %) : ");
    scanf(" %c", &operator);
    switch(operator) {
      case '+':
        printf("\n");
        flag = 1;
        break;
      case '-':
        printf("\n");
        flag = 1;
        break;
      case '*':
        printf("\n");
        flag = 1;
        break;
      case '/':
        printf("\n");
        flag = 1;
        break;
      case '%':
        printf("\n");
        flag = 1;
        break;
      default:
        printf("\nInvalid.\n", operator);
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        flag = 0;
        break;
    }
  } while(!flag);
};

int main() {
  int nbr;
  int result;

  result = askForNumbers(&nbr, 1);
  if (result == false) { return 0; }

  result = operation();
  if (result == false) { return 0; }

  printf("%d !", nbr);
}