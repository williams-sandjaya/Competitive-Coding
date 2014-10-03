#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define i64 long long
#define u64 unsigned long long

i64 decode(char *str) {
	i64 ret = 0;
	int p, q;
	for(int i=0; str[i]; i+=2) {
		p = str[i]-'0'; // number of times the actual digit is there
		q = str[i+1]-'0'; // actual digit
		while(p--) ret = ret*10 + q; // actual number now stored in ret
	}
	return ret;
}

void encode(i64 n1, i64 n2, char *op, char *res) {
	int k = 0, cnt;
	i64 r;
	char temp[25], v;
	switch(op[0]) {
		case '+': r = n1 + n2; break;
		case '-': r = n1 - n2; break;
		case '*': r = n1 * n2; break;
		case '/': r = n1 / n2; break;
	}
	sprintf(temp, "%lld", r); // r stored in temp as lld
	for(int i=0, j; temp[i]; i=j) {
		v = temp[i];
		for(j=i,cnt=0; j<i+9 && temp[j] && v==temp[j]; j++,cnt++);
		res[k++] = cnt+'0';
		res[k++] = v;
	}
	if(!k) strcpy(res,"10"), k+=2;
	res[k] = 0;
}

int main() {
	char num1[25], num2[25], op[2], res[50];
	i64 n1, n2;
	while(scanf("%s%s%s", num1, op, num2)==3) {
		n1 = decode(num1);
		n2 = decode(num2);
		encode(n1, n2, op, res);
		printf("%s %s %s = %s\n", num1, op, num2, res); // res %d mein print karne se aasan rehta
	}
	return 0;
}
