#include<stdio.h>

int decimal_to_binary(char dec[],char bin[]){
    int k,i,j=0,bit=0,started=0;
    unsigned int ndec=0;

    for(k=0;dec[k]!='\0';k++){
        if (dec[k]>='0' && dec[k]<='9') {
            int digit=dec[k]-'0';
            if (ndec > (4294967295 - digit) / 10) {
                printf("Error: Number too large\n");
                ndec=0;
                bin[0]='0';
                bin[1]='\0';
                return 0;
            }
            ndec=ndec*10+(dec[k]-'0');
        }
        else{
            printf("Invalid Input, Decimals only allowed\n");
            ndec=0;
            bin[0]='0';
            bin[1]='\0';
            return 0;
        }
    }  

    for(i=31;i>=0;i--){
        bit=(ndec>>i) & 1;
        if(bit) started=1;
        if(started){
            bin[j++]=bit+'0';
        }
    }
    if(!started) bin[j++]='0'; 
    bin[j]='\0';
    return 0;
}

/*
int main(){

    char b[33];
    decimal_to_binary(b);
    printf("binary: %s\n",b);
    return 0;
}
*/


