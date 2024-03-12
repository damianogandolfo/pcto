#include <stdio.h>

int main()
{
    int pezzi;
    int a;
    printf("inserire numero pezzi\n");
    scanf("%d", &pezzi);
    while( pezzi> 0)
    {
    printf("ne vuoi altri?\n");
    scanf("%d", &a);
    pezzi= pezzi + a;
    printf("ora ci sono %d pezzi\n", pezzi);
    int valore = pezzi * 5;
    if( pezzi > 50)
    {
        printf("il prezzo e di %d euro\n", valore / 100 * 85);
    }
    else if( pezzi > 30)
    {
        printf("il prezzo e di %d euro\n", valore / 100 * 90);
    }
    else
    {
        printf("il prezzo e di %d euro\n", valore);
    }
    

    }
}