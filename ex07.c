#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    printf("inserisci le eta \n");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    printf("eta inserite %d %d %d %d %d %d \n", a, b, c, d, e, f);
    printf("somma eta %d \n", a + b + c + d + e + f);
    printf("media delle eta %d \n", ( a + b + c + d + e + f) / 6);
}