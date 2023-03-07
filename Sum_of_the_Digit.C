/*
Write a program to input a three-digit number and display the sum of the digits
*/
#include<stdio.h>
int main()
{
    int num1,rem,count,sum=0;
    printf("\n Enter a four-digit number: ");
    scanf("%d",&num1);
    rem =num1%10; 
    count =  num1/10;
    sum = rem+sum;

    rem =count%10; 
    count =  count/10;
    sum = rem+sum;

    rem =count%10; 
    count =  count/10;
    sum = rem+sum+count;

    printf("Sum of four digit number %d",sum);
    return 0;
 
}
