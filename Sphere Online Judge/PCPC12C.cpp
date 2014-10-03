#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
enum {UP, RT, DN, LT};

string tiles[9];
int idx[9];

bool valid() {
	return (
		tiles[idx[0]][RT] == tiles[idx[1]][LT] &&
		tiles[idx[0]][DN] == tiles[idx[3]][UP] &&
		tiles[idx[1]][RT] == tiles[idx[2]][LT] &&
		tiles[idx[1]][DN] == tiles[idx[4]][UP] &&
		tiles[idx[2]][DN] == tiles[idx[5]][UP] &&
		tiles[idx[3]][RT] == tiles[idx[4]][LT] &&
		tiles[idx[3]][DN] == tiles[idx[6]][UP] &&
		tiles[idx[4]][RT] == tiles[idx[5]][LT] &&
		tiles[idx[4]][DN] == tiles[idx[7]][UP] &&
		tiles[idx[5]][DN] == tiles[idx[8]][UP] &&
		tiles[idx[6]][RT] == tiles[idx[7]][LT] &&
		tiles[idx[7]][RT] == tiles[idx[8]][LT]
	);
}

int main() {
	int test, i;
	cin >> test;
	while(test--) {
                  
		for(i = 0; i < 9; i++) {
			cin >> tiles[i];
			idx[i] = i;
		}
		
		do {
			if(valid()) break;
		} while(next_permutation(idx, idx + 9));
        //true if the function could rearrange the object as a lexicographicaly greater permutation. 
        //Otherwise, the function returns false to indicate that the arrangement is not greater than the previous, 
        //but the lowest possible (sorted in ascending order).

		
        for(i = 0; i < 9; i++) printf("%d", idx[i] + 1);
		
        printf("\n");
	}
	return 0;
}
