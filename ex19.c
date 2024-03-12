#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("inserire tre numeri\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c)
    {
        printf("possono essere le lunghezze di un triangolo\n");
    }
    else if(a + c > b)
    {
        printf("possono essere le lunghezze di un triangolo\n");
    }
    else if( c + b > a)
    {
        printf("possono essere le lunghezze di un triangolo\n");
    }
    else
    {
        printf("non possono essere le lunghezze di un triangolo\n");
    }
}