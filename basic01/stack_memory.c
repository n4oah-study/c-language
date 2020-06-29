#include <stdio.h>

int add(const int a, const int b);

int main()
{
    int b = 1;
    int a = 3;

    add(a, b);

    return 0;
}

int add(const int a, const int b)
{
    return a + b;
}