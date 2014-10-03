#include <cstdio>

int main() {
	int i, x, y, cs = 1;
	char buff[4096];
	while(scanf("%s", buff) == 1 && buff[0] != '-') {
		for(x = y = i = 0; buff[i]; i++) {
			x += buff[i] == '{' ? 1 : -1; // if '{' then add 1 else subtract 1
			if(x < 0) x += 2, y++; // if x<0 add 2 to x and y++
		}
		
	//	printf("x = %d y = %d\n",x,y);
		printf("%d. %d\n", cs++, (x>>1) + y); 
  //  The value of a right-shift expression e1 >> e2 is e1 / 2e2
	}
	return 0;
}
