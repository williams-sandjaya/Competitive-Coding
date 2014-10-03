#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#define FOR(i,a,b) for(int i=(a),_b=(b); i<=_b; i++)
#define FORD(i,a,b) for(int i=(a),_b=(b); i>=_b; i--)
using namespace std;
int n, a[111];

int main() 
{
    scanf("%d", &n);
    FORD(i,n,1) printf("%d ", 10000000 - i);
}


