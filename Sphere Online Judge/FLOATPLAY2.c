#include <stdio.h>
   #include <math.h>
   int main()
     {
        double num, r;
        int exp=2;
        num = 6.0;
        r = frexp( num, &exp);
        printf("The matissa returned is::%lf \n",r);
        printf("The exponent value stored in exp is::%d \n",exp);
       // return 0;
        system("pause");
     }
