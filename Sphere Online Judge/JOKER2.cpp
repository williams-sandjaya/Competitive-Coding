#include<iostream>
using namespace std;
int n,k,i,cnt=0;char ch;
int main()
{
cin>>n>>k;
    for (i=0;i<n;i++)
    {
    cin>>ch;
    if (ch=='B') cnt++;
    else cnt=0;
        if (cnt>=k) 
        {
        cout<<"DIED\nKILL BATMAN\n"<<endl; 
        return 0;
        }
    }
cout<<"SELECTED\nKILL BATMAN\n"<<endl;
}
 
