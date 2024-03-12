#include <stdio.h>

int main()
{
 int a;
 int b;
 printf("inserisci due numeri\n");
 scanf("%d %d", &a, &b);
 if( a > b)
 {
    printf("%d e maggiore di %d", a, b);
 }
 else if( a < b)
 {
    printf("%d e minore di %d", a, b);
 }
}