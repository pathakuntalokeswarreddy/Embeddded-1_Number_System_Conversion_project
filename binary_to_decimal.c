#include<stdio.h>
#include<limits.h>

unsigned int binary_to_decimal(char nbin[]){  
    
    int nbit=0,i;  
    unsigned int ndec=0;

    for(i=0;nbin[i]!='\0';i++){
        if(nbin[i]!='0' && nbin[i]!='1'){
            printf("Invalid Input(INPUT MUST CONTAIN ONLY 1's AND 0's)\n");
            return 0;
        }
    }                              
    i=0;
    while(nbin[i]!='\0'){
        nbit=nbin[i]-'0';
        if(ndec>(UINT_MAX-nbit)/2){    //UINT_MAX=4294967295
            printf("Error: Number is too large\n");
            ndec=0;   
            return 0;
        }
        ndec=ndec*2 + nbit;
        
        i++;
    }  
    return ndec;
}

/*
int main(){
    unsigned int dec;
    char bin_input[60];
    printf("Enter Binary Number(Only 1's & 0's)-(Max is 32bit only): ");      
    scanf("%s",bin_input);

    dec=binary_to_decimal(bin_input);
    printf("Decimal: %u \n",dec);
    return 0;
}
*/



//gcc main.c binary_to_decimal.c
//11111111111111111111111111111111
//11111111111111111111111111111111111111111

/*in binary_to_decimal conversion, i asked :"from 31th bit to 33rd bit, dry run. 
explain why if before max is failing and how to passing at 33rd bit". Now i got rough idea...
Condition is using previous ndec value, as a limit and allows next one operation. 
The condition (ndec>(UINT_MAX-nbit)/2) = (ndec>2147483647). At 32nd bit, process will be done after 
only condition checks, (ndec>2147483647)=(2147483647>2147483647)=false. So it allows to max value
 i.e., ndec=4294967295..,after that for 33 bit, first condition is checked 
 (4294967295>2147483647)=true, so overflow*/