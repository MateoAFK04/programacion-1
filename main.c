#include <stdio.h>

int main(void) {
  int num;
  printf("ingrese el numero : ");
  do {
    scanf("%d", &num);
    if (num < 0)
      printf("Ingrese un numero valido");
  } while (num < 0);
  int resultadototal = fibonacci(num);
  return 0;
}

int fibonacci(int num) {
  int resultadototal, i, suma1 = 0, suma2 = 1;
  printf("Serie de fibonacci:%d,%d,", suma1, suma2);
  resultadototal = suma1 + suma2;
  for (i = 3; i <= num; i++) {
    printf("%d,", resultadototal);
    suma1 = suma2;
    suma2 = resultadototal;
    resultadototal = suma1 + suma2;
  }

  return resultadototal;
}