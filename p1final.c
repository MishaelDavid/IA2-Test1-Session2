#include<stdio.h>
void input(float*base, float*height)
{
  printf("ENTER BASE AND HEIGHT OF THE TRIANGLE\n");
  scanf("%f%f",base,height);
}
void find_area(float base, float height, float *area)
{
  *area = 0.5 * base * height;
}
void output(float base, float height, float area)
{
  printf("THE AREA OF THE TRIANGLE WITH BASE %f AND HEIGHT %f IS %f\n",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}