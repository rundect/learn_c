#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
  srand(3);
/* генерируем пять случайных целых чисел из отрезка [80;100] */
  printf("%d\n", 80 + rand()%(100 - 80 + 1));
  printf("%d\n", 80 + rand()%(100 - 79));
  printf("%d\n", 80 + rand()%21);
  printf("%d\n", 80 + rand()%21);
  printf("%d\n", 80 + rand()%21);
}