#include<stdio.h>
#include "conversions.h"

unsigned int hexa_to_decimal(char hexa[]){
    char b[33];
    unsigned int d;
    hexa_to_binary(hexa,b);
    d=binary_to_decimal(b);
    return d;
}
/*
int main(){
    unsigned int d;
    d=hexa_to_decimal();
    printf("Decimal is: %u",d);
    return 0;
}
*/
// gcc hexa_to_decimal.c hexa_to_binary.c binary_to_decimal.c