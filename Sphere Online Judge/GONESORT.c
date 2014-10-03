/*
1 7 6 2 5 4 3 =>
1-2-3 is longest consecutive increasing subsequence, number of moves needed is 4.


1 6 4 3 5 2 7 => 
1-2 or 4-5 or 6-7 is longest consecutive increasing subsequence
note that 1-4-5-7 is longest increasing subsequence but number of moves needed is 5 not 3.
*/

#include<stdio.h>
typedef long LL;
int main()
{
    LL i, j, N;
    int test;
    scanf("%d", &test); // number of shelves
    while (test--) {
 scanf("%d", &N); // number of book on a shelf
 LL a[N];
 LL LS[N];
 LL largest;
 for (i = 0; i < N; i++)
     scanf("%ld", &a[i]); // book serial number
 
 
 // now find the longest consecutive increasing subsequence
 for (i = 0; i < N; i++) {
     LS[i] = 1;
     for (j = 0; j < i; j++) {
  if (LS[i] <= LS[j] && a[i] == (a[j] + 1))
      LS[i] = LS[j] + 1;
     }
 }
 
 // now get the length of the longest consecutive increasing subsequence
 largest = 0;
 for (i = 0; i < N; i++) {
     if (LS[i] > largest)
  largest = LS[i];
 }
 
 printf("%ld\n", N-largest);
    }
 
  system("pause");
    return 0;
}
