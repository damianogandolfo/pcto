#include <stdio.h>
int somma (int a, int b)
{
return a + b;
}
void saluto()
{
    printf("ciao Damiano!\n");
}
int main()
{
    int num1;
    int num2;
    int risultato;
    saluto();
    printf("Inserisci due numeri e ti restituisco la somma\n");
    scanf("%d %d", &num1, &num2);
    risultato = somma (num1, num2);
    saluto();
    printf("%d\n", risultato);
}