#include <stdio.h>
int main(void){
  int a=7, b;
  float g= 9.81,v;

  b = (int) g; //приводим значение 9.81 к типу int, получим 9
  v= (float)a; // приводим значение 7 к типу float, получим 7.0
  printf("%d\n", b);
  printf("%1.1f\n", v);

  return 0;
}