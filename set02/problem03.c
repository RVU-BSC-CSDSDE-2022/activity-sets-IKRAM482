#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int input_number()
{
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
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
void output(int n, int result)
{
  printf("the composite of %d is %d",n,result);
}
int main()
{
  int n, result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return(0);
}