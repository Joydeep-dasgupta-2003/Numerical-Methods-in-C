// --> NUMERICAL/regula-falsi.c

#include <stdio.h>
#include <math.h>
#define func x*x*x-10
float f(float x){
  return (func);
}
int main(void) {
float a,b,c,e;
int k=0;

printf("enter accuracy");
scanf("%f",&e);
  
do{
  printf("Enter intervals");
  scanf("%f%f",&a,&b);
}
  while(f(a)*f(b)>0.0);

  do{
    c=b-(f(b)/(f(b)-f(a))*(b-a));
    printf("\nk=%d\ta=%f \tb=%f \tc=%f",k,a,b,c);
    if (f(a)*f(c)<0.0)
      b=c;
    else
      a=c;
      k=k+1;
  }
    while(fabs(f(c))>e);
  printf("\n\nIteration=%d \t Root=%f",k,c);
  return 0;
}
