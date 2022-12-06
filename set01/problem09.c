#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);


int main()
{
  int n,sqrroot;
  n=input();
  square_root(n);
  output(n,sqrroot);
}

float input(){
  float a;
  printf("Enter the number:");
  scanf("%f",&a);
    return a;
}

float square_root(float n){
  return n*n;
}

void output(float n, float sqrroot){
  sqrroot = n*n;
  printf("Square root of %f is %f",n,sqrroot);
}