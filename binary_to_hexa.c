#include<stdio.h>
#include "conversions.h"


void binary_to_hexa(char bin[],char hexa[]){
       
    unsigned int dec;
    char d[12];
    dec=binary_to_decimal(bin);
    int_to_str(dec,d);
    decimal_to_hexa(d,hexa);
}

/*
int main(){
    int b;
    char h[20];
    printf("enter binary: ");
    scanf("%d",&b);
    binary_to_hexa(b,h);
    printf("hexa : %s",h);
    return 0;
}
*/

//gcc main.c binary_to_decimal.c binary_to_hexa.c decimal_to_hexa.c