#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int m, b;
    printf("minutes: ");
    m = GetInt();
    b = m * 12;
    printf("bottles: %d\n", b);
}