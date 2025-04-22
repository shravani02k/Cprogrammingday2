// %*c
#include<stdio.h>

int main()
{
    int num1,num2;
    char ch;

    printf("enter the value of num1 and num2 :");
    scanf("%d%d\n",num1,num2);

    printf("Enter the value for ch :");
    scanf("%*c%c\n",&ch);
    // %*c is used to suppress the first char : in our case enter key

    printf("num1=%d num2=%d ch=%d ch=%c\n",num1,num2,ch,ch);
    return 0;
}