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
  return n;
}
void input_array(int n, int a[n])
{ 
  int i,n;
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
  int i,p,result;
  for(i=2; i<=n/2;i++)
    {
      if((i%n)==0)
        {
        p=1;
        break;
        }
    }
  if(p==0)
  {
    printf("It is prime number\n");
  }
  else
  {
    printf("It is composite number\n");
  }
  return result;
}

