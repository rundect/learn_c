#include <stdio.h>
#include <math.h> // подключаем math.h
#include <stdlib.h>
int main() {
    // float a = 7, b = 2, c = 3, d = 7, e = 8, f = 3, h = 4, result;
    double a, b, c, d, e, f, h, result;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);
    scanf("%lf",&h);
    result = a/(b*(c/(d*(e/(f*h)))));

    printf("%.2f\n", result); 
    return 0;
}