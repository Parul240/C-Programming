/* 
To check the number is prime
*/


#1.
#include <stdio.h>
#include <conio.h>

int main()
{
    int num, a, b, c, k=1;
    printf("Enter the number ");
    scanf("%d", &num);
y:  k = k+1;
    a = num/k;
    b = a*k;
    c = num-b;
    if (c==0)
    {
        printf("Number is not prime");              
        goto x;
        
    }
    if (k<num-1)               
    goto y;
    printf("Number is prime = %d", num);
x:
    getch();
}



#2.
#include <stdio.h>

int main()
{
    int num, a, b, c, k=1;
    printf("Enter the number ");
    scanf("%d", &num);
y:  k = k+1;
    a = num/k;
    b = a*k;
    c = num-b;
    if (c==0)
    {
        printf("Number is not prime");              
        goto x;
        
    }
    if (k<num-1)               
    goto y;
    printf("Number is prime = %d", num);
x:
    return 0;
}
