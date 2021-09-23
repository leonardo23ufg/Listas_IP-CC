#include <stdio.h>
#define N 10000
int main()
{
    char V[N];
    int i1, val_n, n_one, n_two, n_three;
    i1 = val_n = n_one = n_two = n_three = 0;

    scanf("%d", &val_n);
    for (i1 = 0; i1 < val_n; i1++)
    {
        scanf("%*c %[^\n]", V);
            if((int)V[5] == 0)
            {
                if(V[0] == 'o') n_one++;
                if(V[1] == 'n') n_one++;
                if (V[2] == 'e') n_one++;
                if (V[0] == 't') n_two++;
                if (V[1] == 'w') n_two++;
                if (V[2] == 'o') n_two++;
                if(V[0] == 't') n_three++;
                if(V[1] == 'h') n_three++;
                if (V[2] == 'r') n_three++;
                if (V[3] == 'e') n_three++;
                if (V[4] == 'e') n_three++;
            }
            if (n_one >= 2) printf("1\n");
            if (n_two >= 2) printf("2\n");
            if (n_three >= 4) printf ("3\n");
            n_one = n_two = n_three = 0;
    }
    return 0;
}