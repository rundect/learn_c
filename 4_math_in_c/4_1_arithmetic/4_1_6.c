#include <stdio.h>
int main(void){
    int n, m, k, l;
    scanf("%d", &n);

    m = n / 100;
    k = (n % 100) /10;
    l = n % 10;
    printf("%d\n", m + k + l);

  return 0;
}
