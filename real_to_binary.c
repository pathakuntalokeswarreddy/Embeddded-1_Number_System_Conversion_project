#include<stdio.h>
int real_to_binary()
{
    float f;
    int dec,bit=0,started=0,i,j=0,count=0,m[24],sign=0;
    
    printf("Enter float number :");
    if(scanf("%f",&f)!=1)
    {
        printf("Invalid input\n");
        return 0;
    }

    if(f<0)
    {
        sign=1;
        f=f*(-1);
    }

    dec=(int)f;
    f=f-dec;
    //f=((float)(int)(f*1000000+0.5))/1000000;
    printf("Integer part       :%d\n",dec);
    printf("Decimal part       :%f\n",f);
    
    printf("Binary of Integer is:");
    for(i=31;i>=0;i--)
    {
        bit=(dec>>i)&1;
        if(bit) started=1;
        if(started){
            printf("%d",bit);
            count++;
            if(count>1) m[j++]=bit;
        }
    }
    printf("\n");
    printf("Binary of decimal is:");

    for(i=7;i>=0;i--)
    {
        f=f*2;
        bit=(int)(f);
        printf("%d",bit);
        f=f-bit;
        m[j++]=bit;
    }
    while(j!=23)
    {
        m[j++]=0;
    }
    
    m[j]='\0';
    printf("\n \nsign bit: %d\n",sign);

    int exp=(count-1);
    //printf("Exponent is: %d\n",exp);
    exp=exp+127;
    started=0;
    printf("Binary of exponent: ");
    for(i=31;i>=0;i--)
    {
        bit=(exp>>i)&1;
        if(bit) started=1;
        if(started){
            printf("%d",bit);
        }
    }

    printf("\nBinary of Mantissa: ");
    for(int i=0;i<23;i++)
    {
        printf("%d",m[i]);
    }
    printf("\n");

    return 0;
}