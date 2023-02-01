#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int input_n()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
  return n;
}
int sum_n_nos(int n)
{
	int i=0,sum=0;
	while(i<=n)
	{
		i++;
		sum=sum+i;
	}
return sum;
}
void output(int n, int sum)
{
	printf("the sum of%d number is %d",n,sum);
}
int main()
{
	int n,sum=0;
	n=input_n();
	sum=sum_n_nos(n);
	output(n,sum);
	return(0);
}
