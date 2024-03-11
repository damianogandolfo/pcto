#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("inserisci un numero \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("numero inseriti %d %d %d\n", a+b+c, a-b+c, c+c+c);
}