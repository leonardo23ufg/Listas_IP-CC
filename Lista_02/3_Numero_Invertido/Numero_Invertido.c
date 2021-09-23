#include <stdio.h>
void SeparaDigitos(int x, int *a, int *b, int *c);
int Inverte(int *a, int *b, int *c);
int main()
{
    int x, x1, x2, x3;
    scanf("%d", &x);
    if ((x == 0) || (x < 99) || (x > 999))
    {
        return 0;
    }
    SeparaDigitos(x, &x1, &x2, &x3);
    if ((x3 == 0) || (x2 == 0 && x3 == 0))
    {
        return 0;
    }
    x = Inverte(&x1, &x2, &x3);
    printf("%d\n", x);
    return 0;
}
void SeparaDigitos(int x, int *a, int *b, int *c)
{
    int temp1;
    int temp2;
    int temp3;
    temp1 = x / 100;
    temp2 = x / 10 - temp1 * 10;
    temp3 = x - temp1 * 100 - temp2 * 10;
    *a = temp1;
    *b = temp2;
    *c = temp3;
}
int Inverte(int *a, int *b, int *c)
{
    int temp1;
    int temp2;
    int temp3;
    int result;
    temp1 = *a;
    temp2 = *b;
    temp3 = *c;
    result = temp3 * 100 + temp2 * 10 + temp1;
    return result;
}
