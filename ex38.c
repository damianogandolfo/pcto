#include <stdio.h>

int main()
{
    char parola[30];
    int b = 0;
    printf("Inserire una parola\n");
    scanf("%s", parola);
    while (parola[b] != '\0')
    {
       b++;
    }
    printf("%d\n", b);
}