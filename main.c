#include <stdio.h>
#include "conversions.h"

int main(){

    printf("Welcome to Conversions Work Area\n");
    printf("The list of options we have\n");
    printf("1.Binary to Decimal\n");
    printf("2.Binary to Octal\n");
    printf("3.Binary to Hexa\n");

    printf("4.Decimal to Binary\n");
    printf("5.Decimal to Octal\n");
    printf("6.Decimal to Hexa\n");

    printf("7.Octal to Binary\n");
    printf("8.Octal to Decimal\n");
    printf("9.Octal to Hexa\n");

    printf("10.Hexa to Binary\n");
    printf("11.Hexa to Octal\n");
    printf("12.Hexa to Decimal\n");

    printf("13.Signed to Binary\n");
    printf("14.Real to Binary\n");

    char bin_input[33],dec_input[12],oct_input[12],hexa_input[20],res[33];
    unsigned int result=0;
    unsigned long long re;
    int choise,i=0;
    char flag,buffer[20];

    do
    {
        choise = 0;
        printf("Enter your choise: ");
        scanf("%d", &choise);        
        printf("\n");

        switch(choise)
        {
            case 1 : 
            {
                printf("You chose Binary to Decimal Conversion\n");
                printf("Enter only 0's & 1's-(Max is 32bit only)\n");
                printf("Enter Binary Number: ");      
                scanf("%s",bin_input);
                result=binary_to_decimal(bin_input);
                printf("Decimal            : %u \n",result);
                break;
            }
            case 2 :
            {
                printf("You chose Binary to Octal Conversion\n");
                printf("Enter only 0's & 1's-(Max is 32bit only)\n");
                printf("Enter Binary Number: ");      
                scanf("%s",bin_input);
                re=binary_to_octal(bin_input);
                printf("Octal              : %llu \n",re);
                break;
            }

            case 3 :
            {
                printf("You chose Binary to Hexa Conversion\n");
                printf("Enter only 0's & 1's-(Max is 32bit only)\n");
                printf("Enter Binary Number: ");      
                scanf("%s",bin_input);
                binary_to_hexa(bin_input,res);
                printf("Hexa               : %s \n",res);
                break;
            }

            case 4 :
            {
                printf("You chose Decimal to Binary\n");
                printf("Valid Input Range : 0 to 4,294,967,295(32-bit)\n");
                printf("Enter Decimal: ");
                scanf("%s",dec_input);
                decimal_to_binary(dec_input,res);
                printf("Binary       : %s \n",res);
                break;
            }

            case 5 :
            {
                printf("You chose Decimal to octal\n");
                printf("Valid Input Range : 0 to 4,294,967,295(32-bit)\n");
                printf("Enter Decimal: ");
                scanf("%s",dec_input);
                re=decimal_to_octal(dec_input);
                printf("Octal        : %llu \n",re);
                break;
            }

            case 6 :
            {
                printf("You chose Decimal to Hexa\n");
                printf("Valid Input Range : 0 to 4,294,967,295(32-bit)\n");
                printf("Enter Decimal: ");
                scanf("%s",dec_input);
                decimal_to_hexa(dec_input,res);
                printf("Hexa         : %s \n",res);
                break;
            }

            case 7 :
            {
                printf("You chose Octal to Binary\n");
                printf("Valid Input Range : 0 to 37,77,77,77,777(32-bit)\n");
                printf("Enter Octal Number: ");
                scanf("%s",oct_input);
                octal_to_binary(oct_input,res);           //used reverse() function
                printf("Binary            : %s \n",res);   
                break;
            }

            case 8 :
            {
                printf("You chose Octal to Decimal\n");
                printf("Valid Input Range : 0 to 37,77,77,77,777(32-bit)\n");
                printf("Enter Octal Number: ");
                scanf("%s",oct_input);
                result=octal_to_decimal(oct_input);          
                printf("Decimal           : %u \n",result);   
                break;
            }

            case 9 :
            {
                printf("You chose Octal to hexa\n");
                printf("Valid Input Range : 0 to 37,77,77,77,777(32-bit)\n");
                printf("Enter Octal Number: ");
                scanf("%s",oct_input);
                octal_to_hexa(oct_input,res);          
                printf("Hexa              : %s \n",res);   
                break;
            }

            case 10 :
            {
                printf("You chose Hexa to Binary\n");
                printf("Valid Input range: 0 to FFFFFFFF\n");
                printf("Enter Hexa Number: ");
                scanf("%s",hexa_input);
                hexa_to_binary(hexa_input,res);          
                printf("Binary           : %s \n",res);   
                break;
            }

            case 11 :
            {
                printf("You chose Hexa to Octal\n");
                printf("Valid Input range: 0 to FFFFFFFF\n");
                printf("Enter Hexa Number: ");
                scanf("%s",hexa_input);
                re=hexa_to_octal(hexa_input);          
                printf("Octal            : %llu \n",re);   
                break; 
            }

            case 12 :
            {
                printf("You chose Hexa to Decimal\n");
                printf("Valid Input range: 0 to FFFFFFFF\n");
                printf("Enter Hexa Number: ");
                scanf("%s",hexa_input);
                result=hexa_to_decimal(hexa_input);          
                printf("Decimal          : %u \n",result);   
                break; 
            }

            case 13 :
            {
                printf("You chose Signed to Binary\n");
                signed_to_binary();  
                break; 
            }

            case 14 :
            {
                printf("You chose Real to Binary\n");
                printf("This follows IEEE 754 Single Precision format\n");
                real_to_binary(); 
                break; 
            }

            default: 
            {
                printf("Invalid choise\n");
            }
        }
        while((i = getchar())!='\n' && i != EOF);
        printf("\n");
        printf("To continue, press 1 or To Exit, press any key\nEnter : ");
        scanf("%c", &flag);
        
    }while(flag == '1');
 
    printf("Feel free to visit again\nExiting.......\n");
    return 0;
}

//gcc main.c binary_to_decimal.c binary_to_octal.c binary_to_hexa.c decimal_to_binary.c decimal_to_octal.c decimal_to_hexa.c octal_to_binary.c octal_to_decimal.c octal_to_hexa.c hexa_to_binary.c hexa_to_decimal.c hexa_to_octal.c reverse.c int_to_str.c