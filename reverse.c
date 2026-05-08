#include<stdio.h>

void reverse(char str[]) {
    int i = 0, j = 0;
    char temp;

    while (str[j] != '\0') j++;
    j--;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}