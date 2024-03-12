#include <stdio.h>

int main()
{
    int a;
    a=100;
    while ( a > 1)
    {
        a--;
        if(a%2==0)
        {
printf("%d\n", a);
        } 
    }
}