#include<stdio.h>
#include "conversions.h"

int octal_to_hexa(char oct[],char hexa[]){
    unsigned int dec=0;
    char d[12];
    dec=octal_to_decimal(oct);
    int_to_str(dec,d);
    decimal_to_hexa(d,hexa);
    return 0;
}
/*
int main(){

    char hex[20];

    octal_to_hexa(hex);
    printf("hexa : %s",hex);
    return 0;
}
*/
//gcc octal_to_hexa.c reverse.c octal_to_decimal.c decimal_to_hexa.c int_to_str.c
