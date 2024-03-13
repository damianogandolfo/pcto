#include <stdio.h>

int main()
{
    char *parola = "ciao";
    int b = 0;
    while (parola[b] != '\0')
    {
        printf("%c", parola[b]);
        b = b + 1;
    }
    printf("\n");
}