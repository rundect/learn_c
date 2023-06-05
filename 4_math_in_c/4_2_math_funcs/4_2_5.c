#include <stdio.h>
#include <math.h> // подключаем math.h
#include <stdlib.h>
int main (void) {
    int x1, x2;
    scanf("%d", &x1);
    scanf("%d", &x2);

    printf("%d\n", abs(x1 - x2)); 

  return 0;
}