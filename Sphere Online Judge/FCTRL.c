#include<stdio.h>
int two,five;
int main()
{
unsigned int no,five,t=0;
scanf("%u",&t);
//printf("%u",t);
for(;t>0;t--)
{
scanf("%u",&no);
//printf("%u",no);
five=0;
while(no>0)
five+=(no=no/5);
printf("%u\n",five);
}
return 0;
}

/*
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120 // NOTICE, the first trailing zero has appeared!
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800 //  Now there’s 2 zeroes!
11! = 39916800
12! = 479001600
13! = 6227020800
14! = 87178291200
15! = 1307674368000 // Now there’s 3 zeroes?
16! = 20922789888000
17! = 355687428096000
18! = 6402373705728000
19! = 121645100408832000
20! = 2432902008176640000 // Now there’s 4, see a pattern?
…
25! = // Trust me, this number has 6 zeroes, and that’s because 125 has 6 factors of 5

 

It turns out every single factor of 5 in the number adds another power, so we just need to check how many times the number 5 goes into N.
*/
