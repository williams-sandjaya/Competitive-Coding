#include<iostream>
#include<cstdio>
#include<queue>
#include<cmath>
#include<stack>
#include<string>
#include<cmath>
#include<algorithm>
#include<map>
#include<vector>
#include<set>
#include<utility>
using namespace std;

int main() 
{
	int n=0,i=0,x1=0,x2=0,x3=0,y1=0,y2=0,y3=0,max=0,min=0;double a=0,b=0,c=0,ar=0,armin=0,armax=0,s=0;
	cin>>n;
	while(n--)
	{
		i++;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
		b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
		c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
		s=(a+b+c)/2;
		ar=sqrt(s*(s-a)*(s-b)*(s-c));
		
		if(i==1) // 1st iteration
		{
			armax=ar,armin=ar;
			min=1,max=1;
		}
		else
		{
			if(ar>=armax)
			   armax=ar,max=i;			
			if(ar<=armin)
			  armin=ar,min=i;
		}	
	}
	cout<<min <<" "<<max;
}
