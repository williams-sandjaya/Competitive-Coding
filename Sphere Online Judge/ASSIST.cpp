#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 34000
#define TAR 3000
int lucky[TAR+1];
bool flag[MAX+1];

int main() {

	for(int i=1,k=2; i<=TAR; i++, k++) {
		while(flag[k]) // while flag[] is 1
        k++;
		lucky[i] = k; // stores lucky numbers
		
		for(int j=k+1,c=0; j<=MAX; j++) { // marks every kth contestant behind k
			if(flag[j]) 
            continue;
			c++; // only if flag[] is 0
			if(c==k) { // required number behind the contestant is reached
				flag[j] = 1;
				c = 0;
			}
			
		}
		
	}

	int n;
	while(scanf("%d", &n)==1 && n) {
		printf("%d\n", lucky[n]);
	}
	return 0;
}
