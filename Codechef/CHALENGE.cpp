#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int t=0,n=0,h=0,input=0,x=0,y=0,i=0,j=0;
        cin>>t>>n>>h;
        while(t--)
        {
                for(i=0;i<n;i++)
        {
                        x=rand()%4+8;
                        for(j=0;j<x;j++)
                        {
                                y=rand()%26+97;
                                cout<<(char)y;
                        }
                        cout<<"\n";
                        fflush(stdout);
                }
                cin>>input;
        }
        return 0;
}
