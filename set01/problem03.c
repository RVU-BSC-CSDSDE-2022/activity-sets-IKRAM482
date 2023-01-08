
#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int intput()
{
  int n;
  printf("enter the number:");
  scanf("%d" ,&n);
  return n;
}
int add(int a, int b)
{
  return(a+b);
}
void output(int a, int b, int sum)
{
  printf("the sum of %d and %d the number%d",a,b,sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  return(a,b);
  printf("the sum of number%d\n",sum);
}
