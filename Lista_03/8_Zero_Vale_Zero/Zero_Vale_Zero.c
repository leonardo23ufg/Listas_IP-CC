#include <stdio.h>
#define N 5
int main()
{
    int V[N];
    int i1, i2;
    unsigned int n, m, r;
    n = m = i1 = i2 = 0;
    while (1)
    {
        scanf("%d %d", &n, &m);
        if (m == 0 && n == 0)
            break;
        r = n + m;
        i1 = 0;
        while (r != 0)
        {
            V[i1] = r % 10;
            r = r / 10;
            i1++;
        }
        for (i2 = i1 - 1; i2 >= 0; i2--)
        {
            if (V[i2] != 0)
                printf("%d", V[i2]);
        }
        printf("\n");
    }
    return 0;
}