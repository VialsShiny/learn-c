#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int n1 = *a;
  int n2 = *b;

  *a = n2;
  *b = n1;
}

int main() {
  int number1 = 10;
  int number2 = 20;

  printf("Before Swap :\nN1 : %d\t N2 : %d\n", number1, number2);
  swap(&number1, &number2);
  printf("After Swap :\nN1 : %d\t N2 : %d\n", number1, number2);
  system("PAUSE");
}