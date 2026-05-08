#include<stdio.h>
int hexa_to_binary(char hexa[],char bin[]){
    int digit=0,bit,i,j=0,k=0;
    
    while(hexa[j]!='\0') j++;
    if(j>8){
        printf("Error:Number too large\n");
        bin[0]='0';
        bin[1]='\0';
        return 0;
    }
    j=0;
    while(hexa[j]!='\0')
    {
        if (hexa[j]>='A' && hexa[j]<='F') digit=hexa[j]-'A'+10;
        else if(hexa[j]>='a' && hexa[j]<='f') digit=hexa[j]-'a'+10;
        else if(hexa[j]>='0' && hexa[j]<='9') digit=hexa[j]-'0';
        else {
            printf("Invalid Input,only Hexa Decimals are allowed\n");
            bin[0]='0';
            bin[1]='\0';
            return 0;
        }
        for(i=3;i>=0;i--){
            bit=(digit >> i) &1;
            bin[k++]=bit+'0';
        }
        j++;
    }
    bin[k]='\0';
}

/*
int main(){
    char bin[33];
    
    hexa_to_binary(bin);
    printf("%s",bin);
    return 0;
}
*/
