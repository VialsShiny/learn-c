#include <stdio.h>
#include <stdlib.h>
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
    if (step == 1) {
      printf("First number : ");
    } else {
      printf("Second number : ");
    }

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

  return true;
};

int operation(int *nbr1, int *nbr2, int *finalNumber) {
  int flag = 0;
  int result;

  char operator;
  do {
    if (!operator) {
      printf("Operator (+ - * / %%) : ");
      scanf(" %c", &operator);
    }
    switch(operator) {
      case '+':
        printf("\n");
        result = askForNumbers(nbr2, 2);
        if (result == false) { return false; }

        *finalNumber = *nbr1 + *nbr2;
        flag = 1;
        break;
      case '-':
        printf("\n");
        result = askForNumbers(nbr2, 2);
        if (result == false) { return false; }

        *finalNumber = *nbr1 - *nbr2;
        flag = 1;
        break;
      case '*':
        printf("\n");
        result = askForNumbers(nbr2, 2);
        if (result == false) { return false; }

        *finalNumber = *nbr1 * *nbr2;
        flag = 1;
        break;
      case '/':
        printf("\n");
        result = askForNumbers(nbr2, 2);
        if (result == false) { return false; }

        if (*nbr2 == 0) {
          printf("\nDivision by zero is impossible.\n");
          flag = 0;
          break;
        }

        *finalNumber = *nbr1 / *nbr2;
        flag = 1;
        break;
      case '%':
        printf("\n");
        result = askForNumbers(nbr2, 2);
        if (result == false) { return false; }

        if (*nbr2 == 0) {
          printf("\nModulo by zero is impossible.\n");
          flag = 0;
          break;
        }

        *finalNumber = *nbr1 % *nbr2;
        flag = 1;
        break;
      default:
        printf("\nInvalid.\n");
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        flag = 0;
        break;
    }
  } while(!flag);

  return true;
};

int main() {
  int nbr1;
  int nbr2;
  int finalNumber;
  int result;

  result = askForNumbers(&nbr1, 1);
  if (result == false) { return 0; }

  result = operation(&nbr1, &nbr2, &finalNumber);
  if (result == false) { return 0; }

  printf("\nResult : %d\n", finalNumber);

  return 0;
}