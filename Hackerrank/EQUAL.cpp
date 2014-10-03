#include<iostream>
#include<cstdio>
#define INT_MAX 2000000000
using namespace std;

long long int functn (long long int temp)  // similar to greedy Coin-change
{
    long long int x = temp/5 + (temp%5)/2 + (temp%5)%2;
    return x;
}

int array_smallest(long long int array[],int array_length)
{
    long long int smallest = INT_MAX,i;
    for (i = 0; i < array_length; i++)
    {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

long long int mod(long long int x)
{
    if(x>0)
        return x;
    else
        return (-1)*x;
}

int main()
{
    long long int T,N,i,j,min,sum,temp;
    cin>>T;
    while(T--)
    {
        min = 1000000;
        cin>>N;
        int A[N];
        for(i=0 ; i< N ; i++)
        {
            cin>>A[i];
            if(A[i]<min)
                min = A[i];
        }
        
        long long int sum[6];
        for(j=0 ; j<=5 ; j++)
        {
            sum[j]=0;
            for(i=0 ; i< N ; i++)
            {
                temp = mod(A[i] - (min-j));
                sum[j] = sum[j] + functn(temp);
            }
        }
        cout<<array_smallest(sum,6)<<endl;
    }
    return 0;
}
