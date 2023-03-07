/* swapping of two number */


#include <stdio.h>

void main()
{
    int a, b, temp;
    printf("Enter value a, b ");
    scanf("%d%d", &a, &b);
    printf("\nBefore swapping");
    printf("\n%d,%d", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping");
    printf("\n%d,%d", a, b);
    return 0;
}
