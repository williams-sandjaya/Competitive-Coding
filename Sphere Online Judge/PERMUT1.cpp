#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    vector<vector<int> > v(13, vector<int>(100)); //  vector of 13 vectors of 100 int each
    v[0][0] = 1;
    for (int i = 1; i < (int) v.size(); ++i) { // v.size =13
        for (int j = 0; j < (int) v[i].size(); ++j) { // v[i].size =100
            for (int k = j; k >= 0 && k > j - i; --k) {
                v[i][j] += v[i - 1][k]; // array[13][100]
            }
        }
    }
    int d, n, k;
    cin >> d;
    while (d--) {
        cin >> n >> k;
        cout << v[n][k] << endl;
    }
    return 0;
}
