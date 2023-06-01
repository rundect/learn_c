#include <stdio.h>
int main(void){
    int month_start, month_end;
    double cost, total;
    scanf("%d", &month_start);
    scanf("%d", &month_end);
    scanf("%lf", &cost);

    printf("%.2lf\n", (month_end - month_start) * (double)cost);

  return 0;
}
