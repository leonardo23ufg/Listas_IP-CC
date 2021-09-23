#include <stdio.h>
#define N 100000
int main()
{
    int V[N], B[N], x, y, i1, i2, i3;
    scanf("%d", &x);
    for (i1 = 0; i1 < x; i1++)
    {
        scanf("%d", &V[i1]);
    }
    scanf("%d", &y);
    for (i2 = 0; i2 < y; i2++)
    {
        scanf("%d", &B[i2]);
        i3 = 0;
        for (i3 = 0; i3 < x; i3++)
        {
            if (B[i2] == V[i3])
            {
                printf("ACHEI\n");
                break;
            }
            else if (i3 == (x - 1))
                printf("NAO ACHEI\n");
        }
    }
    return 0;
}
