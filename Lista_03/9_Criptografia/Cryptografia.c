#include <stdio.h>
#define N 1000
int main()
{
    char V[N], Temp[N];
    int i1, i2, i3, ix, iy, iz, ia, val_n;
    scanf("%d", &val_n);
    for (i1 = 0; i1 < val_n; i1++)
    {
        ix = iy = iz = 0;
        scanf("%*c %[^\n]", V);
        for (i2 = 0; i2 < sizeof(V); i2++)
        {
            if ((int)V[i2] == 0)
                break;
            V[i2] = (int)V[i2];
            if ((V[i2] > 64 && V[i2] < 91) || (V[i2] > 96 && V[i2] < 123))
            {
                V[i2] += 3;
            }
            V[i2] = (char)V[i2];
        }
        while (V[ix] != 0)
            ix++;
        iy = ix - 1;
        for (iz = 0; iz < ix; iz++)
        {
            Temp[iz] = V[iy];
            iy--;
        }
        Temp[iz] = 0;
        for (i3 = i2 / 2; i2 >= i3; i2--)
        {
            Temp[i2] = (int)Temp[i2];
            Temp[i2]--;
            Temp[i2] = (char)Temp[i2];
        }
        printf("%s\n", Temp);
    }
    return 0;
}