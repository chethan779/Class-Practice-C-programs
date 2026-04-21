#include <stdio.h>

enum months { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

int main() {
  enum months m, n;
  printf("size of m is %lu\n", sizeof(m));    // memory is not stored here
  printf("%d\n", m);
  return 0;
}