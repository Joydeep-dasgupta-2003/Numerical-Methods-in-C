// --> NUMERICAL/simpson38.c

#include <math.h>
#include <stdio.h>
float f(float x) { return (1 / (1 + x * x)); }
void main() {
  float a, b, simp, h;
  int n, i;
  printf("Values of a,b,n:");
  scanf("%f,%f,%d", &a, &b, &n);
  h = (b - a) / n;
  simp = f(a) + f(b);
  for (i = 1; i <= n - 1; i++) {
    if (i % 3 == 0) {
      simp = simp + 2 * f(a + i * h);
    } else {
      simp = simp + 3 * f(a + i * h);
    }
  }
  simp = simp * 3 * h / 8.0;
  printf("The result of sum = %f", simp);
}