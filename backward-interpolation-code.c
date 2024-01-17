// -->backward-interpolation

#include <stdio.h>

int main() {
  float x[15], y[15], X, prod = 1, s, h, d;
  int i, j, n;
  printf("Enter the no. of points: ");
  scanf("%d", &n);
  printf("Enter the value of X  ");
  scanf("%f", &X);
  printf("Enter the values of x and y \n ");
  printf("\nx\ty=f(x)\n");
  for (i = 1; i <= n; i++) {
    scanf("%f\t%f", &x[i], &y[i]);
  }
  h = x[2] - x[1];
  printf("\nh=%f\n", h);
  s = (X - x[n]) / h;
  d = y[n];
  printf("%f %f", s, d);
  for (int k = 1; k < n ; k++) {
    for (j = n; j >=k+1; j=j-1) {
      y[j] = y[j] - y[j-1];
      printf("\ny=%f\n", y[j]);
    }
    prod = prod * (s+k-1) / k;
    d = d + prod * y[n];
    printf("\nd=%f\n", d);
  }
  printf("\n\nThe result is ");
  printf("y(%1.2f) = %3.5f", X, d);

  return 0;
}