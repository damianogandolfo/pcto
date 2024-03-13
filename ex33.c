#include <stdio.h>

int main()
{
    char parola[20];
    int a = 0;
    scanf("%[^\n]s", parola);
    while ( parola[a] != '\0')
    {
        if(parola[a] >= 97 && parola[a] <= 122)
        {
            parola[a] = parola[a] - 32;
        }
        else if(parola[a] >= 65 && parola[a] <= 90)
        {
            parola[a] = parola[a] + 32;
        }
        a++;
    }
    printf("%s\n", parola);

    
}