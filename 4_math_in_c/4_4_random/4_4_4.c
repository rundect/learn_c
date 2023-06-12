#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int rand_a = 66 + rand()%601; 
  printf("%d\n", rand_a);
}
