#include <stdio.h>

void saluto()
{
    printf("ciao Damiano!\n");
}
int main()
{
    int a = 0;
    while(a <= 10)
    {
        saluto();
        a++;
    }
}