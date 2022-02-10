#include <stdio.h>

int input_side()
{ 
  int side;
  printf("ENTER SIDE OF THE TRIANGLE\n");
  scanf("%d", &side);
  return side;
}

int check_scalene(int a, int b, int c)
{
  if( a != b && a != c && b != c )
    {return 1;}
    
     return 0;
}

void output(int a, int b, int c, int isScalene)
{
  if (isScalene == 1)
   {
     printf("THE TRIANGLE WITH SIDES %d,%d,%d IS SCALENE ",a,b,c);
   }
  else 
  {
    printf("THE TRIANGLE WITH SIDES %d,%d,%d IS NOT SCALENE",a,b,c);
  } 
}

int main()
{
  int a = input_side();
  int b = input_side();
  int c = input_side();
  int res = check_scalene(a,b,c);
  output(a, b, c, res);
  return 0;
}
