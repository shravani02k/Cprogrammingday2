//Printf and scanf return type

#include<stdio.h>
int main()
{
    int num1=234;
    int count=printf("welcome to sunbeam !");
    printf("\ncount=%d\n",count);
    count=printf("\nnum1=%d\n",num1);
    //num1 = 234\n
// printf returns the count of number of characters printed
    printf("count=%d\n",count);

    int num2,num3;
    printf("\nenter the value of num2 and num3\n");
    count=scanf("%d%d",&num2,&num3);
    // 45  890
    // scanf returns the count of number of variables scanned
    printf("count of scan=%d\n",count);// 2
    return 0;
}