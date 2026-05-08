#include<stdio.h>
unsigned long long decimal_to_octal(char dec[]){
    int digit,i,k,started=0;
    unsigned long long ndec=0,octal=0;


    for(k=0;dec[k]!='\0';k++){
        if (dec[k]>='0' && dec[k]<='9') {
            int digit=dec[k]-'0';
            if (ndec > (4294967295 - digit) / 10) {
                printf("Error: Number too large\n");
                //printf("Accepted range is : 0 to 4,294,967,295\n");
                return 0;
            }
            ndec=ndec*10+(dec[k]-'0');
        }
        else{
            printf("Invalid Input, Decimals only allowed\n");
            ndec=0;
            return 0;
        }
    }

    for(i=30;i>=0;i-=3){
        digit=(ndec>>i) & 7;
        if(digit) started=1;

        if(started){
            octal=octal*10 + digit;
        }
    }
    return octal;    
}
/*
int main(){
    unsigned long long o;
    char d[10];
    printf("enter decimal:");
    scanf("%s",d);
    o=decimal_to_octal(d);
    printf("octal : %llu",o);
    return 0;
}
*/

