/*
 Write a program to print unit digit of a given number
*/
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a unit digit:- ");
    scanf("%d",&a);

    printf("\n Unit digit Number %d is:- %d ",a,a%10);
    printf("\n");
    return 0;

}
