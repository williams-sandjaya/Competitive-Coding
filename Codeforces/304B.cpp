#include <cstdlib>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int md[] = {31,28,31,30,31,30,31,31,30,31,30,31};
int days (int y, int m, int d)
{
	int s = 0;
	s += (y-1)*365;
	s += (y-1)/4;
	s -= (y-1)/100;
	s += (y-1)/400;
	s += d;
	for (int i = 0 ; i < m-1; ++i)
	{
		s += md[i];
	}
	if (m > 2)
	{
		if (y%4 == 0) s++;
		if (y%100 == 0) s--;
		if (y%400 == 0) s++;
	}
	return s;
}

int main(){
	int y1,m1,d1,y2,m2,d2;
	scanf("%d:%d:%d",&y1,&m1,&d1);
	scanf("%d:%d:%d",&y2,&m2,&d2);
	cout<<abs(days(y1,m1,d1)-days(y2,m2,d2));
}


