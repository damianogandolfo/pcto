#include <stdio.h>

double perimetro(double a, double b, double c)
{
    return a + b + c;
}
int squrt(double q)
{
    if(q > 1)
    {
        double p = q;
        double r = (p + (q / p)) / 2;
        while((p - r) >= 0.00001)
        {
            p = r;
            r = (p + (q / p)) / 2;
        }
        return r;
    }
    else if(q == 0, q == 1)
    {
        return q;
    }
}
double area(double d, double e, double f)
{
    double semiperimetro = perimetro(d, e, f) / 2;
    return squrt(semiperimetro *(semiperimetro - d) *(semiperimetro - e) *(semiperimetro - f));
}
int main()
{
    double lato1;
    double lato2;
    double lato3;
    
    printf("Inserire le dimensioni di un triangolo\n");
    scanf("%lf %lf %lf", &lato1, &lato2, &lato3);
    if( lato1 + lato2 < lato3 || lato1 + lato3 < lato2 || lato2 + lato3 < lato1)
    {
        printf("Non puo essere un triangolo\n");
    }
    else
    {
        double perimetro1 = perimetro(lato1, lato2, lato3);
        double area1= area(lato1, lato2, lato3);
         printf("il perimetro del triangolo e %.3f\n", perimetro1);
         printf("l area del triangolo e %.3f\n", area1);
    }
}