/*
let p=a/b,q=(1-c/d)*(1-a/b). 
The answer of this problem can be showed as:p*q^0+p*q^1+p*q^2+………… 
That is the sum of a geometric progression which is infinite but 0<q<1.We can get the limit by the formula:p/(1-q)
*/

#include<iostream>
#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    double p = (a/b);
    double q = (1-a/b)*(1-c/d);
    double ans = p/(1-q);
    printf("%.14lf",ans);
    
}
