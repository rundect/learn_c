#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int rand_a = -50 + rand()%101;
  printf("%d\n", rand_a);
}
