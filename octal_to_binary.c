#include<stdio.h>
#include "conversions.h"

int octal_to_binary(char oct[],char bin[]){
    int digit,bit,i=0,j=0,k;
    
    unsigned long long int noct=0;

    for(k=0;oct[k]!='\0';k++){
        if (oct[k]>='0' && oct[k]<='7') {
            int digit=oct[k]-'0';
            if (noct > (37777777777 - digit) / 10) {
                printf("Error: Number too large\n");
                if(bin[0]=='\0') { bin[0]='0'; bin[1]='\0';}
                return 0;
            }
            noct=noct*10+(oct[k]-'0');
        }
        else{
            printf("Invalid Input,Only octal numbers allowed\n");
            if(bin[0]=='\0') { bin[0]='0'; bin[1]='\0';}
            noct=0;
            return 0;
        }
    }
    
    while(noct!=0){
        digit=noct%10;
        for(i=0;i<3;i++){
            bit=(digit>>i)&1;
            bin[j++]=bit+'0';            
        }
        noct/=10;
    }
    bin[j]='\0';
    if(bin[0]=='\0') { bin[0]='0'; bin[1]='\0';}
    reverse(bin);
    return 0;
}
/*
int main(){
    
    char b[33];
    printf("Accepeted range: 0 to 37777777777\n");
    octal_to_binary(b);
    printf("binary : %s\n",b);
    return 0;
}
*/


