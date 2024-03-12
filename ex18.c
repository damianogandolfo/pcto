#include <stdio.h>

int main()
{
    int a;
    printf("inserire un anno\n");
    scanf("%d", &a);
    if( a%4 == 0)
    {
        printf("e bisestile\n");
    }
    else if( a%100 == 0)
    {
        printf("non e bisestile\n");
    }
    else if( a%400 == 0)
    {
        printf("e bisestile\n");
    }
    else
    {
        printf("non e bisestile\n");
    }

    
}