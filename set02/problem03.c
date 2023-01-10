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
  int i,result=0,var;
  result=0;
    
  for(i=1; i<=n;i++)
    {
      if((n%i)==0)
        {
          var++;
        }
    }
  if(var>2)
  {
    // printf("It is composit number\n");
    result=1;
  }
  else
  {
    // printf("It is not composite number\n");
    result=2;
  }
  return result;
  
}
void output(int n, int result)
{
  int var;
  if(result == 1){
    printf("It is composit number\n");
  }
  else if(result == 2){
    printf("It is not composite number\n");
  }
}
int main()
{
  int n, result;
  n=input_number();
  result=is_composite(n);
  output(n,result);
  return(0);
}