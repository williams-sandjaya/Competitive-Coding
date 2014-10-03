#include <cstdio>
#include <cstring>
#include <cstdlib>

char str[1024];
int cnt[26];

int main() {
	int test, i, mx, mc, d;
	test = atoi(fgets(str, 1023, stdin)); // atoi converts the string to number // fgets gets the value
	while(test--) {
		fgets(str, 1023, stdin); // fgets gets the value
		memset(cnt, 0, sizeof cnt); // initialise cnt[26] to 0
		
		for(i = 0; str[i]>31; i++) if(str[i]>32) cnt[str[i]-'A']++; //ASCII value should be above 31/32
		//cnt[str[i]-'A']++   syas that if str[i] ='A' then cnt['A'-'A']++ = cnt[0]++; ASCII values are subtracted
		// cnt[26] now stores the number of appearance of all alphabets A-Z in the respective positions
		
		for(mx = 0, mc = 1, i = 1; i < 26; i++) {
			if(cnt[i] > cnt[mx]) mx = i, mc = 1; // finds the maximum occurence of the alphabet
			else if(cnt[i] == cnt[mx]) mc++; // if multiple maximum occurence then mc>1 else mc=1
		}
		
		if(mc > 1) fputs("NOT POSSIBLE\n", stdout); // according to the question
		
		else {
			if(mx >= 4) d = mx - 4; // if the maximum occured letter is after E
			else d = 26 + mx - 4; // if the maximum occured letter is before E
			printf("%d ", d);
			
			for(i = 0; str[i]>31; i++) if(str[i]>32) str[i] = 'A' + (str[i]-'A' - d + 26) % 26; //gets the decrypted value
			
			fputs(str, stdout);
		}
	}
	return 0;
}
