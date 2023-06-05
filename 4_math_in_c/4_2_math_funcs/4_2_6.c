#include <stdio.h>
#include <math.h> // подключаем math.h
#include <stdlib.h>
int main (void) {
    double x1 = -70.33, y1 = -29.20, x2 = 9.20, y2 = 34.09;
    // double x1, y1, x2, y2;
    // scanf("%lf", &x1);
    // scanf("%lf", &y1);
    // scanf("%lf", &x2);
    // scanf("%lf", &y2);

    printf("%0.2lf\n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2))); 

  return 0;
}
