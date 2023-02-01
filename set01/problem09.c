#include<stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
float input()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	return n;
}
float square_root(float n)
{
	float i=1;
	while(fabs(i*i-n)/2>0.0001)
	{
		i=(i+n/i)/2;
	}
return i;
}
void output(float n, float sqrroot)
{
	printf("sqrt of %.2f=%.2f",n,sqrroot);
}
int main()
{
int n,sqrroot;
n=input();
sqrroot=square_root(n);
output(n,sqrroot);
return 0;
}

