#include <stdio.h>
#define N 5000
int main()
{
    int V[N], i1, i2, val_n;
    scanf("%d", &val_n);
    for (i1 = 0; i1 < val_n; i1++)
        scanf("%d", &V[i1]);
    val_n--;
    for (i2 = val_n; i2 >= 0; i2--)
        printf("%d ", V[i2]);
    return 0;
}