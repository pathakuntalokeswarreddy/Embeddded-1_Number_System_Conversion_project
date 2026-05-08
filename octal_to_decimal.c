#include<stdio.h>

unsigned int octal_to_decimal(char oct[]){
    
    int digit,i=0,j=0,k;
    unsigned long long noct=0,base=1;
    unsigned int dec=0;

    for(k=0;oct[k]!='\0';k++){
        if (oct[k]>='0' && oct[k]<='7') {
            digit=oct[k]-'0';
            if (noct > (37777777777ULL - digit) / 10) {
                printf("Error: Number too large\n");
                return 0;
            }
            noct=noct*10+(oct[k]-'0');
        }
        else{
            printf("Invalid Input,Only octal numbers allowed\n");
            noct=0;
            return 0;
        }
    }
    
    digit=0;

    while(noct!=0){
        digit=noct%10;
        dec+=digit*base;
        base*=8;
        noct/=10;
    }
    return dec;
}

//17777777777 = 1111 1111 1111 1111 1111 1111 1111 111
//27777777777 = 1011 1111 1111 1111 1111 1111 1111 1111
//37777777777 = 1111 1111 1111 1111 1111 1111 1111 1111

/*
int main(){
    unsigned int d; // 

    d=octal_to_decimal();
    printf("decimal : %u\n",d);
    return 0;
}
*/

