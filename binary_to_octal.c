#include<stdio.h>
#include "conversions.h"

unsigned long long binary_to_octal(char bin[])
{
    unsigned long long res;
    unsigned int dec;
    char d[12];
    dec=binary_to_decimal(bin);
    int_to_str(dec,d);
    res=decimal_to_octal(d);
    return res;
}

/*
int main(){
    unsigned long long o;

    o=binary_to_octal();
    printf("octal : %llu",o);
    return 0;
}
*/
//11111111111111111111111111111111(32 bits)


//gcc binary_to_octal.c binary_to_decimal.c decimal_to_octal.c int_to_str.c reverse.c