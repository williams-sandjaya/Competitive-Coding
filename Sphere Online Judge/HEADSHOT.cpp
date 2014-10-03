#include <stdio.h>
#include <math.h>

int main() {
	char round[110];
	double total, zero, ones, cnt;
	scanf("%s", round);
	total = zero = ones = cnt = 0;
	for(int i = 0; round[i]; i++, cnt++) {
		if(round[i]=='0') {
			total++; // counts total number of zeroes
			if(round[i+1]) { // if round[i+1] exist ,i.e. round[i] is not the end of the array
				zero += round[i+1]=='0'; // if round[i+1]=='0' then add 1 to zero
				ones += round[i+1]=='1';// if round[i+1]=='1' then add 1 to ones
			}
			else { // if round[i+1] doesn't exist then move to the front of the array
				zero += round[0]=='0';
				ones += round[0]=='1';
			}
		}
	}
	//zero counts the total number of 0 after 0
	//ones counts the total number of i after 0
	// cnt is the total number of rounds
	// total is the total number of zeroes
	if(fabs(zero/(zero+ones) - total / cnt) < 1e-10) puts("EQUAL");
	else if(zero/(zero+ones) > total / cnt) puts("SHOOT");
	else puts("ROTATE");
	return 0;
}
