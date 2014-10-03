

#include<stdio.h>
int main()
{char c[30];
int a,t=10,j;
while(t--)
{scanf("%s",c);a=1,j=0;while(c[j]){if(c[j]=='T'||c[j]=='D'||c[j]=='L'||c[j]=='F')a<<=1;j++;}printf("%d\n",a);}return 0;
}


/*PYTHON
 
 for i in range(10):t=raw_input();print 2**sum(t.count(i)for i in'DFLT')
 
 */
 
 /*
 PERL
 
 print$/,2**y/TDLF//for<>
 */
 
 
 /*
 AWK - RECORD
 $0=2^gsub(/[TDLF]/,0)
 */
