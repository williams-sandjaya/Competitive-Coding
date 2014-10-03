// cpp file
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long N, K, count = 0, i;
    scanf("%lld", &N);
    scanf("%lld", &K);
    long long input[N];
    for (i = 0; i < N; i++)
        scanf("%lld", &input[i]);
    sort(input, input + N); // sorts the whole array
    for (i = 0; i < N; i++)
        if (binary_search(input, input + N, input[i] + K)) //input[i] + K  is the value to be searched for
        // returns 1 if the element is there
        // returns 0 if the element is not there
           { count++;}
    printf("%lld", count);
}
 
