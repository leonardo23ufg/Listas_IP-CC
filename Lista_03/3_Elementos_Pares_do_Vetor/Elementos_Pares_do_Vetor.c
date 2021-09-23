#include <stdio.h>
#define N 1000
int main()
{
    int V[N], i1, i2, i3, val_n;
    scanf("%d", &val_n);
    for (i1 = 0; i1 < val_n; i1++)
        scanf("%d", &V[i1]);
    for (i2 = 0; i2 < val_n; i2++)
    {
        if (V[i2] % 2 == 0)
        {
            printf("%d ", V[i2]);
            i3++;
        }
    }
    printf("%d", i3);
    return 0;
}