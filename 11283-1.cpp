#include <cstdio>

int main()
{
  char a, b, c;

  a = getchar(); 
  b = getchar(); 
  c = getchar();

  printf("%d\n", a * 64 * 64 + b * 64 + c + 95361);
}