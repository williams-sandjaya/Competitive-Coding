/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<bitset>
#include<queue>
#include<string.h>
#include<cstring>
#include<deque>
#include<iomanip>
#include<map>
#include<set>
#include<stack>
#include<stdlib.h>
#define limit 1000000
using namespace std;

int main()
{
	long long test=0,i,j,k,n,sum=0,ans=0,a1,a2,a3,a4,a5,a6,b1,t1,t2,t3,t4,t5,t6,reg,bon;
	cin>>a1>>a2>>a3>>a4>>a5>>a6>>b1;
	for(i=0;i<5;i++)
	{
		reg=0,bon=0;
		cin>>t1>>t2>>t3>>t4>>t5>>t6;
		if(t1==a1 || t2==a1 || t3==a1 || t4==a1 || t5==a1 || t6==a1)
			reg++;
		if(t1==a2 || t2==a2 || t3==a2 || t4==a2 || t5==a2 || t6==a2)
			reg++;
		if(t1==a3 || t2==a3 || t3==a3 || t4==a3 || t5==a3 || t6==a3)
			reg++;
		if(t1==a4 || t2==a4 || t3==a4 || t4==a4 || t5==a4 || t6==a4)
			 reg++;
		if(t1==a5 || t2==a5 || t3==a5 || t4==a5 || t5==a5 || t6==a5)
			reg++;
		if(t1==a6 || t2==a6 || t3==a6 || t4==a6 || t5==a6 || t6==a6)
			reg++;
		if(t1==b1 || t2==b1 || t3==b1 || t4==b1 || t5==b1 || t6==b1)
			bon++;
		
		if(reg==6)
			cout<<"First Parking slot"<<endl;
		else if(reg==5 && bon==1)
			cout<<"Second Parking slot"<<endl;
		else if(reg==5)
			cout<<"Third Parking slot"<<endl;
		else if(reg==4)
			cout<<"Fourth Parking slot"<<endl;
		else if(reg==3)
			cout<<"Fifth Parking slot"<<endl;
		else if(reg==2 || reg==1 || reg==0)
			cout<<"No Parking slot"<<endl;
	}
}
