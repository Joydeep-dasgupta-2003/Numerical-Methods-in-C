// --> NUMERICAL/newton-raphson.c

#include <stdio.h>
#include <math.h>
float f(float x) { return x*x*x-x-1; }
float df(float x) { return 3*x*x-1; }
int main(void) {
  float a, b, c, e;
  int k=0;

  printf("Enter accuracy");
  scanf("%f", &e);

  do {
    printf("ENter the interval\n");
    scanf("%f%f",&a,&b);
  } while (f(a) * f(b) > 0.0);
  c = (a + b) / 2;
  do {
    c = c - (f(c) / df(c));
    printf("k=%d\tc=%f\tf(c)%f\t\n", k, c, f(c));
    k++;
  } while (fabs(f(c)) >= e);
  return 0;
}