#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }
#define i64 long long
#define ld long double
int a[100000];

int main() {

	int n, m, i, ang;
	i64 tot = 0, ans = 0;
	scanf("%d%d", &m, &n); // m = no. of candies , n = no. of students
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		tot += a[i]; 
	}
	// tot now contains sum of all the needed candies by the students
	tot -= m; // tot = sum of all the needed candies by the students - no.of candies = excess candies required
	sort(a, a + n);
	for(i = 0; i < n; i++) {
		ang = _min((i64)a[i], tot / (n-i));
		ans += (i64) ang * ang;
		tot -= ang; // total se ang hatao
	}
	printf("%lld\n", ans);
	return 0;
}
