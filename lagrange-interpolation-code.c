// -->NUMERICAL/lagrange-interpolation.c

#include <stdio.h>

int main(void) {
  float x[15], y[15],X,sum,prod;
  int i,j,n;
  printf("\t\tOutput\n");
  printf("Enter the number of points");
  scanf("%d",&n);
  printf("Enter the value of X in which y required");
  scanf("%f",&X);
  printf("Enter the values of x and y\n");
  printf("\nx\ty=f(x)\n");

  for(i=1;i<=n;i++){
    scanf("%f\t%f",&x[i],&y[i]);
  }

  for(i=1;i<=n;i++){
    prod=y[i];
    for(j=1;j<=n;j++){
      if(j!=i){
        prod=prod*(X-x[j])/(x[i]-x[j]);
      }
    }
      sum=sum+prod;
  }
  printf("\nAtx=%f ,\n\ny=%f",X,sum);
  return 0;
}