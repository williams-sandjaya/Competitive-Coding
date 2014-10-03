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
int a[101][47],k[101];
double two[45];

int main()
{
	int t,i,j,n,ai,minai,cnte,cnto; double oddsum,evensum;
	cin>>t;
	for(i=1;i<45;i++)
        two[i]=pow(2,-i);
	while(t--)
	{
		cin>>n;
		oddsum=evensum=0.0;
		for(i=0;i<n;i++)
        {
            cin>>k[i];
            for(j=0;j<k[i];j++)
                cin>>a[i][j];
            sort(a[i],a[i]+k[i]);
            if(a[i][0]%2) // beginning of each list after sorting is even/odd
                oddsum+=1.0;
            else
                evensum+=1.0;
        }
        for(i=0;i<n;i++)
        {
            j=1;
            while(((a[i][0]%2)==(a[i][j]%2))&&(j<k[i])) // length of odd/even from beginning in each list
            {
                if(a[i][0]%2)
                    oddsum+=1.0;
                else
                    evensum+=1.0;
                j++;
            }
            int kk=1;
            for(;j<k[i];j++) // last element in the sorted list is even/odd 
            {
                if(a[i][j]%2)
                    oddsum+=two[kk++];
                else
                    evensum+=two[kk++];
            }
        }
        if(evensum>oddsum)
            printf("EVEN\n");
        else if(oddsum>evensum)
            printf("ODD\n");
        else
            printf("DON'T PLAY\n");
	}
}
