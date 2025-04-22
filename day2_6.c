// Signed , unsigned, ranges : limits.h

#include<stdio.h>
#include<limits.h>

int main()
{
    int num1= -10;// by default it is a signed integer
    // signed : it can hold +ve as well as -ve values
    // signed is a keyword
    signed int num2=25;

    unsigned int num3=35;
    // unsigned is used to store only positive values
    char ch='A';// by default signed char
    printf("Max value of signed int = %d\n",INT_MAX);
    printf("Min value of signed int = %d\n",INT_MAX);
    printf("Maxed value of unsigned int =%u\n",UINT_MAX);
    // %u is the format specifier for unsigned int

    printf("Max value of char =%d\n",CHAR_MAX);
    printf("Min value of char =%d\n",CHAR_MIN);

    unsigned char ch2;// all 8 bits are reserved for actual data

    printf("Max value of unsigned char =%d\n",UCHAR_MAX);
    short int num4 =25;// 2 bytes : by default it is signed
    // -32768  to + 32767

    unsigned int num5; // 
    // 0 to 65535
    
    printf("Max value for signed short =%d\n",SHRT_MAX);
    printf("Min value for signed short =%d\n",SHRT_MIN);
    
    return 0;

}
