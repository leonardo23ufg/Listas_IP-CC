#include <stdio.h>
double raiz(double n);
double absoluto(double n);
double e = 0;
double r;
int main()
{
    double n;
    double res;
    double x;
    r = 1;
    n = x = 0;
    scanf("%lf %lf", &n, &e);
    while (1)
    {
        res = raiz(n);
        x = n - res * res;
        x = absoluto(x);
        printf("r: %.9lf, err: %.9lf\n", res, x);
        if (x < e)
        {
            break;
        }
    }
    return 0;
}
double raiz(double n)
{
    r = (r + (n / r)) / 2;
    return r;
}
double absoluto(double n)
{
    if (n >= 0)
    {
        return n;
    }
    if (n < 0)
        ;
    {
        return -n;
    }
}