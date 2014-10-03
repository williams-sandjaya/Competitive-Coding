#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num_cases;
    long long mod_by = 1000000007;
    cin >> num_cases;

    long long n;
    long long answer;
    for(int i = 0; i < num_cases; i++) {
        cin >> n;
        long long z = (n*(n-1)*(n-2)*(n-3)) ;//% (mod_by);
        answer = z / 24;
        answer = z % (mod_by);
        cout << answer << endl;
    }

    return 0;
}
