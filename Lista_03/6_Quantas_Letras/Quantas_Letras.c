#include <stdio.h>
#define N 10000
int main()
{
    char V[N];
    int i1, i2, val_n, n_con, n_vog;
    i1 = i2 = val_n = n_con = n_vog = 0;

    scanf("%d", &val_n);
    for (i1 = 0; i1 < val_n; i1++)
    {
        scanf("%*c %[^\n]", V);
        for (i2 = 0; i2 < sizeof(V); i2++)
        {
            if ((int)V[i2] == 0)
                break;
            if (V[i2] == 'b' || V[i2] == 'B' || V[i2] == 'c' || V[i2] == 'C' || V[i2] == 'd' || V[i2] == 'D' || V[i2] == 'f' || V[i2] == 'F' || V[i2] == 'g' || V[i2] == 'G' || V[i2] == 'h' || V[i2] == 'H' || V[i2] == 'j' || V[i2] == 'J' || V[i2] == 'k' || V[i2] == 'K' || V[i2] == 'l' || V[i2] == 'L' || V[i2] == 'm' || V[i2] == 'M' || V[i2] == 'n' || V[i2] == 'N' || V[i2] == 'p' || V[i2] == 'P' || V[i2] == 'q' || V[i2] == 'Q' || V[i2] == 'r' || V[i2] == 'R' || V[i2] == 's' || V[i2] == 'S' || V[i2] == 't' || V[i2] == 'T' || V[i2] == 'v' || V[i2] == 'V' || V[i2] == 'w' || V[i2] == 'W' || V[i2] == 'x' || V[i2] == 'X' || V[i2] == 'y' || V[i2] == 'Y' || V[i2] == 'z' || V[i2] == 'Z')
                n_con++;

            if (V[i2] == 'a' || V[i2] == 'A' || V[i2] == 'e' || V[i2] == 'E' || V[i2] == 'i' || V[i2] == 'I' || V[i2] == 'o' || V[i2] == 'O' || V[i2] == 'u' || V[i2] == 'U')
                n_vog++;
        }
        printf("Letras = %d\n", n_vog + n_con);
        printf("Vogais = %d\n", n_vog);
        printf("Consoantes = %d\n", n_con);
        n_vog = 0;
        n_con = 0;
    }
    return 0;
}