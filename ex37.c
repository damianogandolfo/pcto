#include <stdio.h>
int somma (int a, int b)
{
    return a + b;
}

int differenza (int a, int b)
{
    return a - b;
}
int rapporto (int a, int b)
{
return a / b;
}

int prodotto (int a, int b)
{
return a * b;
}

int main()
{
    int num1;
    int num2;
    int somma1;
    int differenza1;
    int prodotto1;
    float rapporto1;
    printf("Inserire due numeri\n");
    scanf("%d %d", &num1, &num2);
    somma1 = somma (num1, num2);
    differenza1 = differenza (num1, num2);
    rapporto1 = rapporto (num1, num2);
    prodotto1 = prodotto(num1, num2);
    printf("%d\n", somma1);
    printf("%d\n", differenza1);
    printf("%f\n", rapporto1);
    printf("%d\n", prodotto1);
}