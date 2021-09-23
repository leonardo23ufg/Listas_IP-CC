#include <stdio.h>

unsigned long int fat(unsigned int n);
int main()
{
    unsigned int n = 0;
    unsigned long int resultado = 0;
    scanf("%u", &n);
    if (n == 0)
    {
        printf("0! = 1");
    }
    else
    {
        resultado = fat(n);
        printf("%u! = %lu", n, resultado);
    }
    return 0;
}

unsigned long int fat(unsigned int n)
{
    unsigned long int resultado = 1;
    while (n > 1)
    {
        resultado = resultado * n;
        n--;
    }
    return resultado;
}
