#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("inserire tre numeri\n");
    scanf("%d %d %d", &a, &b, &c);
    if( a - b == b - c)
    {
        printf("e una progressione aritmetica\n");
    }
    else
    {
        printf("non e una progressione aritmetica\n");
    }
    
}