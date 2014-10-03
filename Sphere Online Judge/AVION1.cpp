#include <stdio.h>
#include <string.h>
#include<conio.h>

int main() {
	char str[16], *ptr; // ptr is a pointer to be used for strstr
	int first = 0, i;
	for(i = 0; i < 5; i++) { // 5 iterations
		scanf("%s", str);
		ptr = strstr(str, "FBI"); // returns a pointer at a position just before "FBI" if "FBI" is found in the string else returns null
		if(ptr) { // if ptr is not null then
			if(first) putchar(' '); // if first !0 // for space seperated integers in the output
			putchar(i+'1'); first++;
		}
	}
	if(!first) puts("HE GOT AWAY!");
	else putchar('\n');
	getch();
	return 0;
}
