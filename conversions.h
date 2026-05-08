#ifndef CONVERSIONS_H
#define CONVERSIONS_H

void reverse(char str[]);
void int_to_str(unsigned int dec,char d[]);

unsigned int binary_to_decimal(char bin[]);
unsigned long long binary_to_octal(char bin[]);
void binary_to_hexa(char bin[],char hexa[]);

int decimal_to_binary(char dec[],char bin[]);
unsigned long long decimal_to_octal(char dec[]);
int decimal_to_hexa(char dec[],char hexa[]);

int octal_to_binary(char oct[],char bin[]);
unsigned int octal_to_decimal(char oct[]);
int octal_to_hexa(char oct[],char hexa[]);

int hexa_to_binary(char hexa[],char bin[]);
unsigned int hexa_to_decimal(char hexa[]);
unsigned long long hexa_to_octal(char hexa[]);

int signed_to_binary();
int real_to_binary();

#endif