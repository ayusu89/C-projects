#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n == 1)
        printf("%dth Fibonacci term = %d",n, a);

    else if (n == 2)
        printf("%dth Fibonacci term = %d", n, b);

    else
    {
        for (i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%dth Fibonacci term = %d", n ,c);
    }

    return 0;
}
