#include <stdio.h>
void converteEmNotasMoedas(int v_i, int *q_n100, int *q_n50, int *q_n10, int *q_m1);
int main()
{
    int v_i, q_n100, q_n50, q_n10, q_m1;
    v_i = q_n100 = q_n50 = q_n10 = q_m1 = 0;
    scanf("%d", &v_i);
    converteEmNotasMoedas(v_i, &q_n100, &q_n50, &q_n10, &q_m1);
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d", q_n100, q_n50, q_n10, q_m1);
    return 0;
}
void converteEmNotasMoedas(int v_i, int *q_n100, int *q_n50, int *q_n10, int *q_m1)
{
    *q_n100 = v_i / 100;
    *q_n50 = (v_i % 100) / 50;
    *q_n10 = ((v_i % 100) % 50) / 10;
    *q_m1 = ((v_i % 100) % 50) % 10;
}