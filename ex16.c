#include <stdio.h>

int main()
{
    float a;
    printf("inserire una temperatura in Celsius\n");
    scanf("%f", &a);
    float b = 9 / 5 * a + 32;
    float c = a + 273.15;
if( a < -273.15)
{
    printf("errore\n");
}
else
{
    printf("la temperatura in Fahrenheit e %f, e la temperatura in kelvin e %f\n", b, c);
}
}