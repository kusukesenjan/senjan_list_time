#include <stdio.h>

int time(int n)
{
    int a, b, c, n2;
    n2 = n;

    c = n2 % 10;
    if (c > 5)
    {
        n2 += 10;
        c = 10 - c;
    }

    b = n2 % 100 / 10;
    if (b > 5)
    {
        n2 += 100;
        b = 10 - b;
    }

    a = n2 / 100;

    return a + b + c;
}

int main()
{
    printf("%d\n", time(19955));
    return 0;
}