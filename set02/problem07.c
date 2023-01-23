#include<stdio.h>
typedef struct triangle
{
float base;
float altitude;
float area;
}
triangle;
int main()
{
  triangle t;
  t= input_triangle();
  find_area(&t);
  output(t);
}
triangle input_traingle()
{
  triangle t;
  printf("enter the base of the triangle\n");
  scanf("%f",&t.base);
  printf("enter the altitude of the 
  triangle\n");
  scanf("%f",&t.altitude);
  return t;
}
void find_area(triangle *t)
{
  t->area((t->base)*(t-))
}

