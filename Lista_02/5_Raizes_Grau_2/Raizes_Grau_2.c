#include <stdio.h>
#include <math.h>
double raizesEq2Grau(double a, double b, double c);
double x1 = 0;
double x2 = 0;
int main()
{
    double a, b, c;
    int resultado;
    double temp;
    a = b = c = temp = resultado = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    resultado = raizesEq2Grau(a, b, c);
    if (resultado == 0)
    {
        printf("RAIZES IMAGINARIAS");
    }
    if (resultado == 1)
    {
        printf("RAIZ UNICA\nX1 = %.2lf", x1);
    }
    if (resultado == 2)
    {
        if (x1 > x2)
        {
            temp = x1;
            x1 = x2;
            x2 = temp;
        }
        printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf", x1, x2);
    }
    return 0;
}
double raizesEq2Grau(double a, double b, double c)
{
    int resultado = 0;
    double delta;
    if (a == 0)
    {
        if (b == 0)
        {
            x1 = 0;
            resultado = 1;
            return resultado;
        }
        else
        {
            x1 = (-c) / b;
            resultado = 1;
            return resultado;
        }
    }
    delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        return resultado;
    }
    if (delta == 0)
    {
        resultado = 1;
        x1 = (-b) / (2 * a);
        return resultado;
    }
    if (delta > 1)
    {
        resultado = 2;
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        return resultado;
    }
}
