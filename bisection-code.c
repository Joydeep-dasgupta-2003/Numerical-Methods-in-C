// -->Bisection
#include <math.h>
#include <stdio.h>

float f(float x) { return (x * x * x - x - 2); }
int main(void) {
  float a, b, e, c;
  int k = 0;
  printf("enter accuracy");
  scanf("%f", &e);
  do {
    printf("Enter the intervals");
    scanf("%f %f", &a, &b);
  } while (f(a) * f(b) > 0.0);

  do {
    c = (a + b) / 2.0;
    printf("\n k=%d \t a=%f  \t b=%f  \t c=%f  \t f(c)=%f ", k, a, b, c, f(c));
    if (f(a) * f(c) < 0.0) {
      b = c;
    } else {
      a = c;
    }
    k++;
  } while (fabs(f(c)) > e);
}
