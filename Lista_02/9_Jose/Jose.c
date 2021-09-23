#include <stdio.h>
void SeparaDigitos(int x, int *a, int *b, int *c);
int Inverte(int *a, int *b, int *c);
int main()
{
    int t, x, x1, x2, x3, y, y1, y2, y3;
    t = x = x1 = x2 = x3 = y = y1 = y2 = y3 = 0;
    scanf("%d", &t);
    while (t > 0)
    {
        scanf("%d %d", &x, &y);
        if ((x > 99) && (x < 1000) && (y > 99) && (y < 1000))
        {
            SeparaDigitos(x, &x1, &x2, &x3);
            SeparaDigitos(y, &y1, &y2, &y3);
            x = Inverte(&x1, &x2, &x3);
            y = Inverte(&y1, &y2, &y3);
            if (x > y)
            {
                printf("%d\n", x);
            }
            else
            {
                printf("%d\n", y);
            }
            t--;
        }
        else
        {
            return 0;
        }
    }
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