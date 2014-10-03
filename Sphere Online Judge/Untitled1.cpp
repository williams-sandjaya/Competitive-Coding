#include<cstdio>
#include<cstring>
#include<iostream>
void uwritestring(char *str) { while((*str!='\0')) { printf("%c",str); str++; }}
int main()
{
    char* AT="_";
    uwritestring(AT);
    system("pause");
}
