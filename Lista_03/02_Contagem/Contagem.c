#include <stdio.h>
int main()
#define N 1000
{
    int V[N], val_n, i1, i2, K, i3 = 0;
    while (1)
    {
        scanf("%d", &val_n);
        if ((val_n >= 1) && (val_n <= 1000))
        {
            break;
        }
    }
    for (i1 = 0; i1 < val_n; i1++)
        scanf("%d", &V[i1]);
    scanf("%d", &K);
    for (i2 = 0; i2 < val_n; i2++)
    {
        if (V[i2] >= K)
            i3++;
    }
    printf("%d", i3);
    return 0;
}