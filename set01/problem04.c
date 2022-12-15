#include<stdio.h>
int input();
void add(int a, int b, int *sum );
int change_number(int *a);
int output(int a,int b, int sum);

int input()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int change_number(int *a)
{
  *a=6;
}

void add(int a, int b, int *sum)
{
  *sum=a+b;
}
int output(int a ,int b,int sum)
{
  printf("the sum of %d and %d number%d\n",a,b,sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  change_number(&a);
  add(a,b,&sum);
  printf("the sum of the number%d\n",sum);
}
