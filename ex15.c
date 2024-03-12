#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("inserisci due numeri\n");
    scanf("%d %d", &a, &b);
    if( a%b == 0)
    {
        printf("%d e un multiplo di %d\n", a, b);
    }
    else
    {
        printf("%d non e mulitplo di %d\n", a, b);
    }

}