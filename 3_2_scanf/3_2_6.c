#include <stdio.h>
int main(void){
    double rub, kurs, dollars;
    scanf("%lf", &kurs);
    scanf("%lf", &dollars);
    rub = dollars*kurs;
    printf("%13.13lf\n", rub);
    return 0;
}