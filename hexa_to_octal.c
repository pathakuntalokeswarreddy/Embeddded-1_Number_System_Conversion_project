#include<stdio.h>
#include "conversions.h"

unsigned long long hexa_to_octal(char hexa[]){
    char b[33];
    unsigned long long o;
    hexa_to_binary(hexa,b);
    o=binary_to_octal(b);
    return o;
}
/*
int main(){
    unsigned long long o;
       
    o=hexa_to_octal();
    printf("Octal: %llu",o);
    return 0;
}
*/
//gcc hexa_to_octal.c hexa_to_binary.c binary_to_octal.c binary_to_decimal.c int_to_str.c decimal_to_octal.c reverse.c