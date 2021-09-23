#include <stdio.h>
#define N 1000
int main()
{
    char Ini[N], Fin[N];
    int i1, i2, i3, iy, iz, ia, val_n;
    scanf("%d", &val_n);
    for (i1 = 0; i1 < val_n; i1++)
    {
        i2 = iy = iz = 0;
        scanf("%*c %[^\n]", Ini);
        for (i2 = 0; i2 < sizeof(Ini); i2++)
        {
            if (Ini[i2] == 0)
                break;
            if ((Ini[i2] > 64 && Ini[i2] < 91) || (Ini[i2] > 96 && Ini[i2] < 123))
                Ini[i2] += 3;
        }
        iy = i2 - 1;
        for (iz = 0; iz < i2; iz++)
        {
            Fin[iz] = Ini[iy];
            iy--;
        }
        Fin[iz] = 0;
        for (i3 = i2 / 2; i2 >= i3; i2--)
            Fin[i2]--;
        printf("%s\n", Fin);
    }
    return 0;
}