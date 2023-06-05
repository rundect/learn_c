#include <stdio.h>
#include <math.h> // подключаем math.h
#include <stdlib.h>
int main (void) {
    double a = 17.77, b = 18.31, c = 168.87, triangle_square, pi = 3.1415926;
    // double a, b, c, triangle_square, pi = 3.1415926;
    // scanf("%lf",&a);
    // scanf("%lf",&b);
    // scanf("%lf",&c);
    c =  c*pi/180; 
    triangle_square = 0.5 * a * b *sin(c);
    printf("%.2f\n", triangle_square); 

  return 0;
}
