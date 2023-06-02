#include <stdio.h> 
int main(void){
    char name[] = "S.Holmes:";
    char latitude[] = "51grad 31\'25.48\" N";
    char longitude[] = "0 grad  9\'29.93\" W";

    printf("%s\n%s\n%s\n", name, latitude, longitude);

    return 0 ;
}