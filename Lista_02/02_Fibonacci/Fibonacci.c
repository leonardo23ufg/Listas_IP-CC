#include <stdio.h>
int fibonacci(int t1, int t2, int n);
int main()
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int resultado = 0;
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n3 == 1)
    {
        printf("%d", n1);
    }
    else if (n3 == 2)
    {
        printf("%d", n2);
    }
    else if (n3 == 3)
    {
        resultado = n1 + n2;
        printf("%d", resultado);
    }
    else
    {
        n3 = n3 - 3;
        resultado = fibonacci(n1, n2, n3);
        printf("%d", resultado);
    }
    return 0;
}
int fibonacci(int t1, int t2, int n)
{
    int resultado = 0;
    resultado = t1 + t2;
    while (n > 0)
    {
        resultado = resultado + t2;
        t2 = resultado - t2;
        n--;
    }
    return resultado;
}