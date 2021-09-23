#include <stdio.h>
int somaDivisores(unsigned int n);
int main()
{
    unsigned int n;
    int resultado = 0;
    scanf("%u", &n);
    if (n == 1)
    {
        return 0;
    }
    else
    {
        resultado = somaDivisores(n);
        printf(" = %d", resultado);
        if (resultado == n)
        {
            printf(" (NUMERO PERFEITO)");
            return 0;
        }
        printf(" (NUMERO NAO E PERFEITO)");
        return 0;
    }
}
int somaDivisores(unsigned int n)
{
    int resultado = 0;
    int temp = 2;
    printf("%u = 1", n);
    while (temp < n)
    {
        if (n % temp == 0)
        {
            printf(" + %d", temp);
            resultado = resultado + temp;
        }
        temp++;
    }
    return resultado + 1;
}
