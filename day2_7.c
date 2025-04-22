// Value out of range
#include<stdio.h>

int main()
{
    char ch1='A';//65
    char ch2='B';//66
    char res1=ch1+ch2;
    // res1 = 65 + 66
    // res1 = 131 
    // range of signed char = -128 to +127
    // 131 is out of range

    unsigned char res2=ch1+ch2;
    // range : 0 to 255
    // res2 = 131 (in range)


    printf("Res1=%d\n",res1);//-125
    printf("Res2=%d\n",res2);//131

    signed char ch3 = 500;
    unsigned char ch4=500; // 0 to 255

    printf("ch3=%d\n",ch3);
    printf("ch4=%d\n",ch4);

    return 0;
}