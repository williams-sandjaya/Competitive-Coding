/* atan example */
#include <stdio.h>
#include <math.h>

//PI upto 100 digits 
//pi/4 = atan(1)

int main ()
{
  double param1,param2, result;
  param1 = 1.0/5.0;
  param2= 1.0/239.0;
  result = (4*atan (param1))-(atan(param2));
  result=result*4;
  printf ("%.20lf\n",result );
  //system("pause");
}
