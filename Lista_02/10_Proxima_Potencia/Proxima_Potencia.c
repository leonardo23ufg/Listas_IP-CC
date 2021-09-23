#include <stdio.h>
#include <math.h>
int i;
int next_power(int n, int p);
int main()
{
    int n;
    int p;
    int res;
    scanf("%d %d", &n, &p);
    res = next_power(n, p);
    printf("%d -> %d^%d = %d", n, i, p, res);
    return 0;
}
int next_power(int n, int p)
{
    int result = 0;
    int *p_i = &i;
    int alt_i = 0;
    int alt_res = 0;
    *p_i = pow(n, 1. / p);
    alt_i = *p_i + 1;
    result = pow(*p_i, p);
    alt_res = pow (alt_i, p);
    if (fabs(n - result) > fabs(n-alt_res))
    {
        *p_i = alt_i;
        return alt_res;
    }
    if (fabs(n - result) < fabs(n-alt_res))
    {
        return result;
    }
}