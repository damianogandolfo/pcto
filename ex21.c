#include <stdio.h>

int main()
{
    int a;
    int b = 1969;
    printf("inserire il proprio anno di nascita\n");
    scanf("%d", &a);
    if( a == b)
    {
        printf("sei nato nell'anno in cui l'uomo e andato sulla Luna\n");
    }
    else if( a < b)
    {
        printf("sei nato %d anni prima\n", b - a);
    }
    else
    {
        printf("sei nato %d anni dopo\n", a - b);
    }
}