#include<stdio.h>
#include "conversions.h"

void int_to_str(unsigned int dec,char d[])
{
    int x,i=0;
    
    while(dec!=0){
        x=dec%10;
        d[i++]=x+'0';
        dec/=10;
    }
    d[i]='\0';
    reverse(d);
}