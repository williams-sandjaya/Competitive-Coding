#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int mat[1000][1000];
int rsum[1000], csum[1000];

int main() {

	int n, i, j, sum, diff, cs = 1;
	while(scanf("%d", &n)==1 && n) {
		for(i = sum = 0; i < n; i++) {
			for(j = 0; j < n; j++) {
				scanf("%d", &mat[i][j]);
				sum += mat[i][j];
			}
		}
		for(i = 0; i < n; i++) {
			for(rsum[i] = csum[i] = j = 0; j < n; j++) {
				rsum[i] += mat[i][j]; // rsum[i] stores the row data sum
				csum[i] += mat[j][i]; // csum[i] stores the column data sum
			}
		}
		diff=0;
		for(i = 0; i < n; i++)
			if(rsum[i] > csum[i])
				diff += rsum[i] - csum[i];
		printf("%d. %d %d\n", cs++, sum, diff);
	}
	return 0;
}
