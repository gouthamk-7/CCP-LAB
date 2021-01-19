/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
void main()
{
    int num1,num2, sum=0;
    printf("Enter two numbers:");
    scanf("%d\t%d",&num1,&num2);
    sum=num1+num2;
    printf("The sum is %d", sum);
}