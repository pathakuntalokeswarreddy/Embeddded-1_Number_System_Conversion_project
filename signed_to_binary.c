/*This program is to find 2's compliment form of negative numbers
  It accepts decimal range is (-128 to 127)-8 bit
  Sample Input1  : -10
  Sample Output1 : 11110110 (2's compliment form)
  Sample Input2  : 10
  Sample Output2 : 00001010 
*/

#include<stdio.h>
int signed_to_binary(){
    short int dec;  // we can use uint8_t, but we cant give error, if user enters beyond range,
                    // becuase uint8_t wraps silently. so checking condition always fails
    
    printf("Enter Number(Accepted range: -128 to 127)\nEnter        :");
    if(scanf("%hd",&dec)!=1)
    {
        printf("Enter only decimals,No other characters are accepted\n");
        return 0;
    }

    if(dec<-128 || dec>127){
        printf("Invalid Input\n");
        return 0;
    }
    printf("You entered  :%hd\n",dec);
    if(dec<0)
    {
        dec=256+dec;
        printf("+ve form of entered decimal: %d\n",dec);
    }
    printf("Binary       :");
    for(int i=7;i>=0;i--){
        int bit=(dec>>i)&1;
        printf("%d",bit);
    }
    return 0;
}