#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int input_array_size()
{
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  printf("enter the elements in array");
  return n;
}
void input_array(int n, int a[n])
{ 
  int i;
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
  int i,result=0,var,sum=0;
    
  for(i=1; i<=n;i++)
    {
      if((n%i)==0)
        {
          var++;
        }
    }
  if(var>2)
  {
    result=1;
  }
  else
  {
    result=2;
  }
sum=sum+result;
  return sum;
}
void output(int sum)
{ 
  printf("the sum of the compsite number is %d",sum);
}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers( n, a);
  output(sum);
  return 0;
}
