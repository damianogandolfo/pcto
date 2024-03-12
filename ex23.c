#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("inserisci un numero\n");
    scanf("%d", &a);
    b=2;
    if( a == 1)
    {
        printf("non e un numero primo\n");
    }
    else
    {
         while(a%b != 0)
            b++;
            if(b == a)
            {
                printf("%d e primo\n", a);
            }
            else
            {
                printf("%d non e primo\n", a);
            }
    }
    
}