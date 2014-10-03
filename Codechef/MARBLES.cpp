#include<stdio.h>

long long int gcd(long long int a,long long int b) 
{   
	if(b%a==0) 
		return a; 
	else 
		return gcd(b%a,a);
}

void Divbygcd(long long int *a,long long int *b) 
{
	long long int c=*a,d=*b;
	(*a)=(*a)/gcd(c,d);
	(*b)=(*b)/gcd(c,d);
}

long long int C(long long int n,long long int k) // calculates nCk
{
	long long int numerator=1,denominator=1,toMul,toDiv,i;
	n--; k--;
	if(k>n/2) 
	   k=n-k; // use smaller k
	for (i=1;i<=k;i++) 
	{
		toMul=n-k+i;
		toDiv=i;
		Divbygcd(&toMul,&toDiv); // always divide before multiply
		Divbygcd(&numerator,&toDiv);
		Divbygcd(&toMul,&denominator);
		numerator*=toMul;
		denominator*=toDiv;
	}
	return numerator/denominator;
}

int main()
{
	long long int n,m,c,ans;
	scanf("%lld",&c);
	while(c--)
	{
		scanf("%lld%lld",&n,&m);
		printf("%lld\n",C(n,m));
	}
}
