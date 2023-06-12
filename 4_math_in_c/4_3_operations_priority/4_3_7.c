#include <stdio.h>
#include <math.h> // подключаем math.h
#include <stdlib.h>
int main() {
    // double a = 12.19, b = 12.11, c = 17.18, s, p;
    double a, b, c, s, p;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%0.2lf\n", s); 

    return 0;
}