#include <stdio.h>
double compute_pi(int n);
int main()
{
  int inp;
  double res;
  scanf("%d", &inp);
  res = compute_pi(inp);
  printf("%.12lf", res);
  return 0;
}
double compute_pi(int n)
{
  double result = 1;
  int num = 2;
  int den = 1;
  int i = 1;
while (n > 0)
{
  result = result * num/den;
  if (i%2 == 1)
  {
    den = den + 2;
  }
  if (i%2 == 0) 
  {
    num = num + 2;
  }
  n = n - 1;
  i = i + 1;
}
return result*2;
}
