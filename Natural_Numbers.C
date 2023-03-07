/**
 * C program to print all natural numbers from 1 to n
 */
 
 //1.with while loop
 
  #include <stdio.h>

void main()
{
    int n, i, s=0;
    printf("Enter The Limit: ");
    scanf("%d", &n);
    while(i!=n)
    {
        i = i+1;
        printf("%d\t", i);
        s = s+1;
    }
}





//2.with for loop

#include <stdio.h>

int main()
{
    int i, n;

    /* Input upper limit from user */
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 1 to %d : \n", n);

    /*
     * Start loop counter from 1 (i=1) and go till n (i<=n)
     * increment the loop count by 1 to get the next value. 
     * For each repetition print the value of i.
     */
    for(i=1; i<=n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}





//3.print natural series in range

#include <stdio.h>

int main()
{
    int i, start, end;

    /* Input start and end limit */
    printf("Enter start value: ");
    scanf("%d", &start);
    printf("Enter end value: ");
    scanf("%d", &end);

    printf("Natural numbers from %d to %d : \n", start, end);

    /*
     * Start loop counter from start (i=start) and go till 
     * end (i<=end), increment the loop count by 1 to get 
     * the next value. For each repetition print the value of i.
     */
    for(i=start; i<=end; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}



