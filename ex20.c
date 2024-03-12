#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("inserire tre lunghezze dei lati di un triangolo\n");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && a == c  )
    {
        printf("il tiangolo e equilatero\n");
    }
    else if( a != b && a != c && c != b )
    {
       printf("il tiangolo e scaleno\n"); 
    }
    else
    {
        printf("il tiangolo e isoscele\n");
    }
}