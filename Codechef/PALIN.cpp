/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<bitset>
#include<queue>
#include<string.h>
#include<cstring>
#include<deque>
#include<iomanip>
#include<map>
#include<set>
#include<stack>
#include<stdlib.h>
#define limit 1000000
using namespace std;
unsigned long long mod = 1000000007,z=0,prime_upto=limit, sqrtlimit = sqrt(limit);
vector<bool> sieve(limit+1, true);

long long binpow(long long val, long long deg, long long mod) // calculates and returns (val^deg) % mod
{
    if (!deg) return 1 % mod;
    if (deg & 1) return binpow(val, deg - 1, mod) * val % mod;
    long long res = binpow(val ,deg >> 1, mod);
    return (res*res) % mod;
}

long long int gcd(long long int a,long long int b) // calculates gcd of two numbers
{
	if(b%a==0)
	   return a;
	else
	   gcd(b%a,a);
}

long long prime_sieve() // Eratosthenes prime sieve
{
    for(long long int n=4;n<=limit;n=n+2)
        sieve[n]=false;

    for(long long int n=3;n<sqrtlimit;n=n+2)
        if(!sieve[n])
            for(long long int m=n*n;m<=limit;m=m+(2*n))
                sieve[m]=false;

    sieve[1]=false;
}

void nine(char *line, int i)/* checks to see if a character is '9', if yes then add '1' by carrying */
{                           /* over so that we have '10' and if not, then a simple addition of '1'  */
    if (line[i] == '9')     /* ex: '6' turns to '7'                                                 */ 
    {
      line[i] = '0';
      nine(line, i-1);
    }
    else 
    {
      line[i] = (char)((int)line[i] + 1);
    }
}

void make_dec(char *line, int i, int len) { /* say you have a number 31345, the function checks digits equidistant */
  if (line[len-i-1] < line[i])              /* from the middle and perform assignments based on their relative value */
  {
    line[len-i-1] = line[i];
  }

  else if (line[len-i-1] > line[i])
  {
    nine(line, len-i-2); //in short converts a '9' to '0' OR add '1' to any other number
                         //len-i-2 cuz to access all array members
    line[len-i-1] = line[i];
  }    
}

int number_like_9999(char *line, int len)    /* checks to see if a number is only of the digit '9' */
{                                             /* ex: 99999 returns 1 */
  int count=0;
  int i=len;
  
  while (i--)
  {
    if (line[i] == '9') { count++; }
  }
  
  if (count == len) { return 1; }

  return 0;
}

void add_1(char *line, int len) /* if the number is made only of the digit '9' then this function */
{                               /* changes the string from a number like 999 to 1000 */
  int i;

  line[0] = '1';
  for (i = 0; i < len; i++)
  {
    line[i+1] = '0';
  }
}

int main(void)
{
  
  int iters;                                                                    /* total iterations of the program */
  int i;                                                                        /* for for loop */
  char line[1000001];                                                           /* each individual case */
  int len;                                                                      /* length of caes */
  
  scanf("%d", &iters);
  
  while (iters--)
  {
    scanf("%s", line);
    len = strlen(line);
    
    if ( number_like_9999(line, len) ) {  /* checks to see if a number is only of the digit '9' *//* ex: 99999 returns 1 */
      add_1(line, len);  /* if the number is made only of the digit '9' then this function */
                         /* changes the string from a number like 999 to 1000 */
      len++;
    }
    
    else
    {
      nine(line, len-1);  
                          //converts all ending '9' to '0' 1245[9][9]
                          //len-1 cuz to access all array members
                          // add 1 to the digit just before the ending '9' Ex : 1243[5]999
    }
    
    
    for (i = 0; i < len/2; i++)
    {
      make_dec(line, i, len);
    }
    
    printf("%s\n", line);
    
    memset(line, 0, sizeof(line));  /* clean the array,initialise it to 0 for the next round */
  }

  system("pause");
}
