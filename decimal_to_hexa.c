#include<stdio.h>
int decimal_to_hexa(char dec[],char hexa[]){
    int digit,i,started=0,k,j=0;
    unsigned int ndec=0;
    
    for(k=0;dec[k]!='\0';k++){
        if (dec[k]>='0' && dec[k]<='9') {
            int digit=dec[k]-'0';
            if (ndec > (4294967295 - digit) / 10) {
                printf("Error: Number too large\n");
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
    
    for(i=28;i>=0;i-=4){
        digit= (ndec >> i) & 15;
        if(digit) started=1;
        if(started) {
            if(digit>9) hexa[j++]=digit+'A'-10;
            else hexa[j++]=digit+'0';
        }
    }
    if(!started) hexa[j++]='0'; 
    hexa[j]='\0';
}

/*
int main(){
    
    char h[20],d[10];
    printf("Enter decimal: ");
    scanf("%s",d);
    decimal_to_hexa(d,h);
    printf("hexa: %s",h);
    return 0;
}
*/