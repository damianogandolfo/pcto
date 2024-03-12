#include <stdio.h>

int main()
{
    int a;
    printf("inserisci la tua eta\n");
    scanf("%d", &a);
    if( a >= 18)
    {
        printf("sei maggiorenne\n");
    }
    else
    {
        printf("sei minorenne\n");
    }
}