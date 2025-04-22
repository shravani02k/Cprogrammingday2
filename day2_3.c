// scanf

#include<stdio.h>

int main()
{
    int num1,num2;
    printf("enter the value of num1 num2 : \n");
    scanf("%d%d",&num1,&num2); // 50
    // & --> address of operator

    printf("The value entered by user is %d and %d\n",num1,num2);
    return 0;
}