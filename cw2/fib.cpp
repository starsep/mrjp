#include <cstdio>

extern int fib(int n);

int main() {
  int n;
  scanf("%d", &n);
  printf("%d\n", fib(n));
}