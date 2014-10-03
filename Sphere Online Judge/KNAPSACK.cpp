#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int W,n;
    cin >> W >> n;
    vector<int> values(W + 1);

    while(n--)
    {
        int w, v;
        cin >> w >> v;

        for(int i = W - w; i >= 0; --i)
            values[i+w] = max(values[i+w],values[i]+v);
    }
    cout << values.back() << endl;
}
