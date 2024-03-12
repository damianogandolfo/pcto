#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("inserisci la tua eta\n");
    scanf("%d", &a);
    printf("a quale eta puoi prendere la patente nel tuo paese?");
    scanf("%d", &b);
    if( a >= b)
    {
        printf("puoi prendere la patente\n");
    }
    else
    {
        printf("non puoi prendere la patente\n");
    }
}