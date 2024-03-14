#include <stdio.h>

int main()
{
    double x;
    double y;
    printf("Inserisci le coordinate di un punto che appartiene al piano cartesiano\n");
    scanf("%lf %lf", &x, &y);
    if( x > 0 && y > 0)
    {
        printf("Il punto si trova nel primo quadrante\n");
    }
    else if( x < 0 && y < 0)
    {
        printf("Il punto si trova nel secondo quadrante\n");
    }
    else if( x < 0 && y < 0)
    {
        printf("Il punto si trova nel terzo quadrante\n");
    }
    else if( x > 0 && y < 0)
    {
        printf("Il punto si trova nel quarto quadrante\n");
    }
    else if( x == 0 && y == 0)
    {
        printf("Il punto si trova nell origine\n");
    }
    else if( x == 0 && y != 0)
    {
        printf("Il punto si trova sull asse y\n");
    }
    else if( x != 0 && y == 0)
    {
        printf("Il punto si trova sull asse x\n");
    }
}